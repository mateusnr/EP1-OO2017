#ifndef DRAW_HPP
#define DRAW_HPP

#include <ncurses.h>
#include <ctime>
#include <cstdlib>
#include "GameObject.hpp"
#include "Map.hpp"
#include "Player.hpp"
#include "Trap.hpp"
#include "Bonus.hpp"

class Draw
{
private:
	std::vector<std::string> mapM;
	int delay;
public:
	Draw();
	Draw(Map map, int delay);
	~Draw();

	void setMapM(std::vector<std::string> mapM);
	std::vector<std::string> getMapM();
	void setDelay(int delay);
	int getDelay();

	void clearMatrix();
	void putDelay();
	void showScore(int score);
	void insertObject(char obj, int x, int y);
	void insertObject(GameObject * object);
	void showScreen();
	void printTrap(std::vector<Trap> traps);
	void printBonus(std::vector<Bonus> bonuses);

};


#endif 
