#include "../inc/Player.hpp"

Player::Player()
{
	setPosX(0);
	setPosY(0);
	setObj(0);
	lives = 0;
	alive = true;
	score = 0;
}

Player::Player(int posX, int posY)
{
	setPosX(posX);
	setPosY(posY);
	setObj(0);
	lives = 0;
	alive = true;
	score = 0;
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

int Player::getScore()
{
	return score;
}

void Player::setScore(int score)
{
	this->score = score;
}