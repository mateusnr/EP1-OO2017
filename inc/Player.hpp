#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <ncurses.h>
#include "GameObject.hpp"
#include "Collider.hpp"

class Player : public GameObject
{
private:
	int lives;
	bool alive;
	bool victory;
	int score;
	char direction;
public:
	Player();
	Player(int posX, int posY);
	~Player();
	int getLives();
	void setLives(int lives);
	bool getAlive();
	void setAlive(bool alive);
	bool getVictory();
	void setVictory(bool victory);
	int getScore();
	void setScore(int score);
	char getDirection();
	void setDirection(char direction);

	void movePlayer(Collider col);
	void changeCoordinates();
};

#endif