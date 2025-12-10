#pragma once

class Entity
{
private:

	float x;
	float y;
	float width;
	float height;

public:

	Entity(float x, float y, float width, float height);
	virtual ~Entity();
		
	virtual void update() = 0;
	virtual void draw() = 0;

	float getX() const;
	float getY() const;
	float getWidth() const;
	float getHeight() const;

	void setX(float newX);
	void setY(float newY);

};