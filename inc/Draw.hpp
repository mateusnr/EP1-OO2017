#ifndef DRAW_HPP
#define DRAW_HPP

#include <ncurses.h>
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
	~Draw();
	Draw(Map map, int delay);

	void setMapM(std::vector<std::string> mapM);
	std::vector<std::string> getMapM();
	void setDelay(int delay);
	int getDelay();

	void clearMatrix();
	void putDelay();
	void showScore();
	void insertObject(char obj, int x, int y);
	void showScreen();
	void printTrap(std::vector<Trap> traps);
	void printBonus(std::vector<Bonus> bonuses);
	bool showMenu(size_t x, size_t y);


};


#endif 
