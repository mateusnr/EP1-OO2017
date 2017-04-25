#include "../inc/Bonus.hpp"

Bonus::Bonus()
{
	setPosX(0);
	setPosY(0);
	setObj('+');
	setBonus(0);
}

Bonus::Bonus(int x, int y)
{
	setPosX(x);
	setPosY(y);
	setObj('+');
	setBonus(5);
}

void Bonus::setXY(int x, int y)
{
	setPosX(x);
	setPosY(y);
}
Bonus::~Bonus() {}

void Bonus::setBonus(int bonus)
{
	this->bonus = bonus;
}

int Bonus::getBonus()
{
	return bonus;
}