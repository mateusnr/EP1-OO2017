#include <iostream>
#include "../inc/Map.hpp"
#include "../inc/Collider.hpp"
#include "../inc/Player.hpp"
#include "../inc/Trap.hpp"
#include "../inc/Bonus.hpp"
#include "../inc/Draw.hpp"
#include "../inc/Trap.hpp"

int main()
{
	Map map("./doc/map.txt");
	Draw screen(map, 1);
	Collider collider(map.generateMap());

	Player player(0,1);

	Bonus b1(3, 1);
	Trap t1(4, 1);
	std::vector<Bonus> bonuses;
	bonuses.push_back(b1);
	std::vector<Trap> traps;
	traps.push_back(t1);


	

	initscr();
	noecho();
	nodelay(stdscr, false);
	nodelay(stdscr, true);
	curs_set(0);

	
	move(0,0);
	screen.showScreen();
	screen.insertObject(&player);
	screen.printBonus(bonuses);
	screen.printTrap(traps);
	while (player.getAlive() && not player.getVictory())
	{
		player.movePlayer(collider);
		screen.insertObject(&player);
		screen.showScore(player.getScore());

	}
	nodelay(stdscr, false);
	
	echo();
	endwin();

}
