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
	std::vector<Trap> traps;
	std::vector<Bonus> bonuses;
	
	bonuses.push_back(b1);
	traps.push_back(t1);

	b1.setXY(8,3);
	bonuses.push_back(b1);
	b1.setXY(25, 5);
	bonuses.push_back(b1);
	b1.setXY(9, 6);
	bonuses.push_back(b1);
	b1.setXY(45, 11);
	bonuses.push_back(b1);
	b1.setXY(14, 14);
	bonuses.push_back(b1);
	b1.setXY(14, 15);
	bonuses.push_back(b1);
	b1.setXY(18, 42);
	bonuses.push_back(b1);
	b1.setXY(18, 43);
	bonuses.push_back(b1);
	b1.setXY(18, 44);
	bonuses.push_back(b1);
	b1.setXY(18, 45);
	bonuses.push_back(b1);
	b1.setXY(18, 46);
	bonuses.push_back(b1);



	t1.setXY(5, 15);
	traps.push_back(t1);
	t1.setXY(5, 16);
	traps.push_back(t1);
	t1.setXY(3, 9);
	traps.push_back(t1);
	t1.setXY(39, 15);
	traps.push_back(t1);
	t1.setXY(24, 9);
	traps.push_back(t1);
	t1.setXY(23, 4);
	traps.push_back(t1);
	t1.setXY(5, 11);
	traps.push_back(t1);
	t1.setXY(22, 18);
	traps.push_back(t1);
	t1.setXY(23, 18);
	traps.push_back(t1);
	t1.setXY(24, 18);
	traps.push_back(t1);

	

	initscr();
	noecho();
	nodelay(stdscr, true);
	curs_set(0);

	
	move(0,0);
	screen.showScreen();
	screen.insertObject(&player);
	screen.printBonus(bonuses);
	screen.printTrap(traps);
	while (player.getAlive() and not player.getVictory())
	{

		player.movePlayer(collider);
		for (int i = 0; i < traps.size() or i < bonuses.size(); i++)
		{
			if (collider.isPlayerCollision(&player, &bonuses[i]) and i < bonuses.size())
			{
				player.setScore(bonuses[i].getBonus());
				bonuses.erase(bonuses.begin()+i);
			}
			else
			{
				if (collider.isPlayerCollision(&player, &traps[i]) and i < traps.size())
				{
					if (player.getScore() > 0)
					{
						player.setScore(-1*traps[i].getDamage());
						traps.erase(traps.begin()+i);
					}
					else
					{
						player.setAlive(false);
						break;
					}
				}
			}
		}
		if (player.getPosX() == 48 and player.getPosY() == 18)
		{
			player.setVictory(true);
			continue;
		}
		screen.insertObject(&player);

		screen.showScore(player.getScore());

	}
	nodelay(stdscr, false);
	
	echo();
	endwin();

}
