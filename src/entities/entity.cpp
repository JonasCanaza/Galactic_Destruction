#include "entities/entity.h"

Entity::Entity(float x, float y, float width, float height)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	isActive = true;
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

bool Entity::getActive() const
{
	return isActive;
}

void Entity::setX(float newX)
{
	this->x = newX;
}

void Entity::setY(float newY)
{
	this->y = newY;
}

void Entity::setActive(bool newActive)
{
	this->isActive = newActive;
}