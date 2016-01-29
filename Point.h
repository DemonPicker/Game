#ifndef POINT_H
#define POINT_H

#include <SFML\Graphics.hpp>

class Point : public sf::Vertex
{
public:
	Point(sf::Vector2f vector);
	Point(double x, double y);

private:
	int x;
	int y;
};

#endif
