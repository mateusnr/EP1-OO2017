#include "../inc/Bonus.hpp"

Bonus::Bonus()
{
	setPosX(0);
	setPosY(0);
	setObj('!');
	setDamage(0);
}

Bonus::~Bonus() {}

void Bonus::setBonus(int bonus)
{
	this->bonus = bonus;
}

int Bonus::getBonus()
{
	return bonus;s
}