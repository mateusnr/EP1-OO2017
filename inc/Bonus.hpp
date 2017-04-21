#ifndef BONUS_HPP
#define BONUS_HPP

#include "GameObject.hpp"

class Bonus : public GameObject
{
private:
	int bonus;
public:
	Bonus();
	~Bonus();
	void setBonus(int bonus);
	int getBonus();

};


#endif
