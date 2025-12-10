#pragma once

#include "entities/entity.h"

class Nave : public Entity
{
private:



public:
	
	Nave(float x, float y, float width, float height);

	void update() override;
	void draw() override;

};