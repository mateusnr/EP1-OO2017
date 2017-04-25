#include "../inc/Trap.hpp"

Trap::Trap()
{
	setPosX(0);
	setPosY(0);
	setObj('*');
	setDamage(0);
}

Trap::Trap(int x, int y)
{
	setPosX(x);
	setPosY(y);
	setObj('*');
	setDamage(5);

}

void Trap::setXY(int x, int y)
{
	setPosX(x);
	setPosY(y);
}

Trap::~Trap() {}

int Trap::getDamage()
{
	return damage;
}

void Trap::setDamage(int damage)
{
	this->damage = damage;
}

