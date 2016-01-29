#ifndef GAME_H
#define GAME_H

#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>

#include "Point.h"

class game
{
public:
	game();  //<! Default Constructor
	game(sf::RenderWindow*); //<! Used to create my window pointer

	void init();
	void input(sf::RenderWindow &window); //!< Taking in inputs
	void update();
	void draw();
	
protected:

	sf::RenderWindow* window;//<! Window pointer

private:


};

#endif;