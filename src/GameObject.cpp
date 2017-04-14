#include "../inc/GameObject.hpp"

GameObject::GameObject()
{
	setPosX(0);
	setPosY(0);
	setObj(0);
}


//destrutor
GameObject::~GameObject() {}


int GameObject::getPosX()
{
	return posX;
}

void GameObject::setPosX(int posX)
{
	this->posX = posX;
}

int GameObject::getPosY()
{
	return posY;
}

void GameObject::setPosY(int posY)
{
	this->posY = posY;
}

char GameObject::getObj()
{
	return obj;
}

void GameObject::setObj(char obj)
{
	this->obj = obj;
}
