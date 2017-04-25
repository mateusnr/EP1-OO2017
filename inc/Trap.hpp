#ifndef TRAP_HPP
#define TRAP_HPP

#include "GameObject.hpp"

class Trap : public GameObject
{
private:
	int damage;
public:
	Trap();
	Trap(int x, int y);
	~Trap();
	int getDamage();
	void setDamage(int damage);
	void setXY(int x, int y);
};


#endif
