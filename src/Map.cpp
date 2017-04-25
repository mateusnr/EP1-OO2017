#include "../inc/Map.hpp"

Map::Map()
{
	this->file_path = "./doc/map.txt";
}

Map::Map(std::string file_path)
{
	this->file_path = file_path;
}

Map::~Map() {} 

size_t Map::getMaxX()
{
	return max_x;
}

size_t Map::getMaxY()
{
	return max_y;
}

void Map::setFilePath(std::string file_path)
{
	this->file_path = file_path;
}

std::string Map::getFilePath()
{
	return file_path;
}

std::vector<std::string> Map::generateMap()
{
	std::ifstream mapF(file_path);

	std::string line;
	std::vector<std::string> mapM;

	if (mapF.is_open())
	{

		while(not mapF.eof())
		{
			std::getline(mapF, line);
			line += '\n';
			mapM.push_back(line);
		}
	}
	else
	{
		throw "Error while opening file";
	}

	return mapM;

}

