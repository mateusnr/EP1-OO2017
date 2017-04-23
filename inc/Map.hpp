#ifndef MAP_HPP
#define MAP_HPP

#include <string>
#include <vector>
#include <fstream>
#include <iostream>

class Map
{
private:
	std::string file_path;
	const size_t max_x = 20;
	const size_t max_y = 50;
public:
	Map();
	~Map();
	size_t getMaxX();
	size_t getMaxY();
	void setFilePath(std::string file_path);
	std::string getFilePath();
	
	std::vector<std::string> generateMap();
};


#endif 
