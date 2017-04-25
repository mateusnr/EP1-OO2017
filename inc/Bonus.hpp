#ifndef BONUS_HPP
#define BONUS_HPP

#include "GameObject.hpp"

class Bonus : public GameObject
{
private:
	int bonus;
public:
	Bonus();
	Bonus(int x, int y);
	~Bonus();
	void setBonus(int bonus);
	int getBonus();
	void setXY(int x, int y);

};


#endif
