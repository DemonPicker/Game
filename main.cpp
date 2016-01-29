#include "game.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1260, 650), "Normal Test");

	game g(&window);// hello
	g.init();

	while (window.isOpen())
	{
		g.input(window);
		g.update();
		g.draw();
	}

}