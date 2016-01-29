#ifndef DEMON_H
#define DEMON_H

#include "character.h"

class Demon : Character
{
public:
	Demon(sf::Image *image);
	bool setImageToSprite(); // Set the sprite to the image pointer here
	sf::Vector2f getPosition();
};

#endif

