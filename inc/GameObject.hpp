#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

class GameObject
{
private:
	int posX;
	int posY;
	char obj;
public:
	GameObject();
	~GameObject();
	
	int getPosX();
	void setPosX(int posX);
	int getPosY();
	void setPosY(int posY);
	char getObj();
	void setObj(char obj);
};

#endif