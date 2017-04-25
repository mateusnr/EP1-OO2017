#include "../inc/Player.hpp"

Player::Player()
{
	setPosX(0);
	setPosY(0);
	setObj('@');
	lives = 0;
	alive = true;
	victory = false;
	score = 0;
}

Player::Player(int posX, int posY)
{
	setPosX(posX);
	setPosY(posY);
	setObj('@');
	lives = 0;
	alive = true;
	victory = false;
	score = 0;
}

char Player::getDirection()
{
	return direction;
}

void Player::setDirection(char direction)
{
	if (direction == 'a') { this->direction = 'l'; return;}
	else if (direction == 'd') { this->direction = 'r'; return;}
	else if (direction == 'w') { this->direction = 'u'; return;}
	else if (direction == 's') { this->direction = 'd'; return;}
}

//destrutor
Player::~Player() {}

int Player::getLives()
{
	return lives;
}

void Player::setLives(int lives)
{
	this->lives = lives;
}

bool Player::getAlive()
{
	return alive;
}

void Player::setAlive(bool alive)
{
	this->alive = alive;
}

bool Player::getVictory()
{
	return victory;
}

void Player::setVictory(bool victory)
{
	this->victory = victory;
}

int Player::getScore()
{
	return score;
}

void Player::setScore(int score)
{
	this->score += score;
}

void Player::changeCoordinates()
{
	move(getPosY(), getPosX());
	addch(' ');
	refresh();

	if (getDirection() == 'l') { setPosX(getPosX() - 1); }
	else if (getDirection() == 'r') { setPosX(getPosX() + 1); }
	else if (getDirection() == 'u') { setPosY(getPosY() - 1); }
	else if (getDirection() == 'd') { setPosY(getPosY() + 1); }

	setDirection(0);
}

void Player::movePlayer(Collider col)
{
	char command = tolower(getch());
	if (command == -1)
		return;

	setDirection(command);
	if (col.isCollision(this, getDirection()))
		setDirection(0);

	changeCoordinates();
}