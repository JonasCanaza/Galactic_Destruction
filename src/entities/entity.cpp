#include "entities/entity.h"

Entity::Entity(float x, float y, float width, float height)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

Entity::~Entity()
{

}

float Entity::getX() const
{
	return x;
}

float Entity::getY() const
{
	return y;
}

float Entity::getWidth() const
{
	return width;
}

float Entity::getHeight() const
{
	return height;
}