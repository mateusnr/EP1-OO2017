#include "../inc/Collider.hpp"

Collider::Collider() {}
Collider::~Collider() {}

Collider::Collider(std::vector<std::string> mapM)
{
	this->mapM = mapM;
}

//verificador de colisoes
bool Collider::checkCollision(int x, int y, char direction)
{
	switch (direction)
	{
		case 'r':
			if (x + 1 >= mapM[y].size()-1)
				return true;
			else if (mapM[y][x + 1] != ' ')
				return true;
			break;

		case 'l':
			if (x -1 <= 0)
				return true;
			else if (mapM[y][x-1] != ' ')
				return true;
			break;
		case 'u':
			if (y-1 <= 0)
				return true;
			else if (mapM[y-1][x] != ' ')
				return true;
			break;
		case 'd':
			if (y - 1 >= mapM.size()-1)
				return true;
			else if (mapM[y+1][x] != ' ')
				return true;
			break;
		default:
			return false;
			break;
	}
	return false;
}


bool Collider::isCollision(GameObject *object, char direction)
{
	return checkCollision(object->getPosX(), object->getPosY(), direction);
}


//Verifica colisao de player com algum objeto
bool Collider::isPlayerCollision(GameObject *playerObject, GameObject *object)
{
	if ((playerObject->getPosY() == object->getPosY()) and 
			(playerObject->getPosX() == object->getPosX()))
		return true;

	return false;
}