#include "../inc/Draw.hpp"

Draw::Draw(Map map, int delay)
{
	try {
		mapM = map.generateMap();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	this->delay = delay;
}

Draw::Draw() {}
Draw::~Draw() {}

void Draw::setMapM(std::vector<std::string> mapM)
{
	this->mapM = mapM;
}

std::vector<std::string> Draw::getMapM()
{
	return mapM;
}

void Draw::setDelay(int delay)
{
  this->delay = delay;
}

int Draw::getDelay()
{
  return delay;
}

void Draw::clearMatrix()
{
	mapM.clear();
}

void Draw::showScreen()
{
	for(size_t i = 0; i < mapM.size(); i++)
	{
		printw("%s", mapM[i].c_str());
		refresh();
	}
}

void Draw::insertObject(char obj, int x, int y)
{
	move(y, x);
	printw("%c", obj);
	refresh();
}

void Draw::printTrap(std::vector<Trap> traps)
{
	for(size_t i = 0;i < traps.size(); i++)
	{
		move(traps[i].getPosY(), traps[i].getPosX());
		addch(traps[i].getObj());
		refresh();
	}
}


void Draw::printBonus(std::vector<Bonus> bonuses)
{
	for(size_t i = 0; i < bonuses.size(); i++)
	{
		move(bonuses[i].getPosY(), bonuses[i].getPosX());
		addch(bonuses[i].getObj());
		refresh();
	}
}



