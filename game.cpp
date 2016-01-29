#include "game.h"

game::game()
{
}

game::game(sf::RenderWindow* window) : window(window) // creates window pointer
{
}

void game::init()
{

}

void game::input(sf::RenderWindow &window) //<!Input which references my window pointer
{
	sf::Event event;

	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			window.close();
		}
	}
}

void game::update()
{

}

void game::draw()
{
	window->clear(sf::Color(0, 0, 0)); //<!Clear screen

	sf::Vertex line[] =
	{
		sf::Vertex(sf::Vector2f(300, 300)),
		sf::Vertex(sf::Vector2f(10, 300))
	};
	
	window->draw(line, 2, sf::Lines);

	window->display();
}