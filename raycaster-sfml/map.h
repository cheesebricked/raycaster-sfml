#pragma once

int map[] =
{
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 0, 0, 1, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 1, 1, 1, 1,
	1, 0, 1, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
};

void drawMap()
{
	for (int y = 0; y < mapA; y += mapY) 
	{
		for (int x = 0; x < 8; x++)
		{
			if (map[x + y] == 0)
			{
				std::cout << "0";
			}
			if (map[x + y] == 1)
			{
				std::cout << "1";
			}
		}
		std::cout << std::endl;
	}
}