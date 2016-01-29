#include "demon.h"


Demon::Demon(sf::Image *image)
{
	texture->loadFromImage(*image);

	setImageToSprite();
}

bool Demon::setImageToSprite()
{
	sprite->setTexture(*texture);	
}

sf::Vector2f Demon::getPosition()
{
	return sf::Vector2f(0, 0);
}