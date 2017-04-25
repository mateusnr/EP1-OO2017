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
public:
	Map();
	Map(std::string file_path);
	~Map();
	void setFilePath(std::string file_path);
	std::string getFilePath();
	
	std::vector<std::string> generateMap();
};


#endif 
