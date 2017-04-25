#include "../inc/Draw.hpp"

//recebe a matriz do mapa
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

//printa a matriz
void Draw::showScreen()
{
	for(size_t i = 0; i < mapM.size(); i++)
	{
		printw("%s", mapM[i].c_str());
		refresh();
	}
}

//insere um objeto na tela
void Draw::insertObject(char obj, int x, int y)
{
	move(y, x);
	printw("%c", obj);
	refresh();
}

//mostra as traps do mapa
void Draw::printTrap(std::vector<Trap> traps)
{
	for(size_t i = 0;i < traps.size(); i++)
	{
		move(traps[i].getPosY(), traps[i].getPosX());
		addch(traps[i].getObj());
		refresh();
	}
}

//mostra os bonus do mapa
void Draw::printBonus(std::vector<Bonus> bonuses)
{
	for(size_t i = 0; i < bonuses.size(); i++)
	{
		move(bonuses[i].getPosY(), bonuses[i].getPosX());
		addch(bonuses[i].getObj());
		refresh();
	}
}

//insere um objeto qualquer
void Draw::insertObject(GameObject * object)
{
	move(object->getPosY(), object->getPosX());
	addch(object->getObj());
	refresh();
}

void Draw::putDelay()
{
	unsigned int retTime = time(0) + delay/20;
	while (time(0) < retTime);

}
//mostra o score
void Draw::showScore(int score)
{
	move(23, 0);
	printw("SCORE: %d", score);
	refresh();
}


