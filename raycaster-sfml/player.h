#include <SFML/Graphics.hpp>
#include <math.h>
#define PI 3.14159

class Player
{
public:
	float x, y, angle; // angle is a radian
	float sinx, cosx;
	int boxX, boxY, m_speed, r_speed;
	sf::CircleShape circle;
	sf::RectangleShape direction;	

	void init()
	{
		cosx = cos(angle);
		sinx = sin(angle);
	}

	void update()
	{
		cosx = cos(angle);
		sinx = sin(angle);

		move();
		draw();
		drawLine();
	}

	void move()
	{
		// forward /  backward
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			x += cosx * m_speed;
			y += sinx * m_speed;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			x -= cosx * m_speed;
			y -= sinx * m_speed;
		}

		// rotate
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			if (abs(angle) >= PI * 2)
			{
				angle = 0;
			}
			angle -= 0.01 * r_speed ;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			if (abs(angle) >= PI * 2)
			{
				angle = 0;
			}
			angle += 0.01 * r_speed;
		}
	}

	void draw()
	{
		int radius = 10;
		circle.setPosition(x - radius, y - radius);
		circle.setRadius(radius);
		window.draw(circle);
	}

	void drawLine()
	{
		direction.setSize(sf::Vector2f(50, 2)); // length, width
		direction.setPosition(x, y - 1);
		direction.setRotation((angle * 180) / PI);
		window.draw(direction);
	}
};