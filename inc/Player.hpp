#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "GameObject.hpp"

class Player : public GameObject
{
private:
	int lives;
	bool alive;
	int score;
public:
	Player();
	Player(int posX, int posY);
	~Player();
	int getLives();
	void setLives(int lives);
	bool getAlive();
	void setAlive(bool alive);
	int getScore();
	void setScore(int score);
};

#endif