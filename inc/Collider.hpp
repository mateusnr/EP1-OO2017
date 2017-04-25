#ifndef COLLIDER_HPP
#define COLLIDER_HPP

#include <vector>
#include <string>
#include "GameObject.hpp"

class Collider
{
private:
	std::vector<std::string> mapM;
public:
	Collider();
	Collider(std::vector<std::string> mapM);
	~Collider();

	void setMap(std::vector<std::string> mapM);
	std::vector<std::string> getMap();


	bool isCollision(GameObject* object, char direction);
	bool checkCollision(int x, int y, char direction);
	bool isPlayerCollision(GameObject * playerObject, GameObject *object);

	
};


#endif
