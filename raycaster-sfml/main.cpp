#include <iostream>
#include <SFML/Graphics.hpp>
#include "settings.h"
#include "map.h"
#include "player.h"

Player player;

void init();


int main()
{
    window.setFramerateLimit(60);

    init();
    
    drawMap();

	while (window.isOpen())
	{
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        player.update();
            

        window.display();
	}
}

void init()
{
    // init player
    player.x = 500;
    player.y = 500;
    player.angle = 0;
    player.m_speed = 3;
    player.r_speed = 5;
}