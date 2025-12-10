#include "entities/nave/nave.h"

#include "raylib.h"

Nave::Nave(float x, float y, float width, float height) : Entity(x, y, width, height)
{

}

void Nave::draw()
{
	int drawX = static_cast<int>(getX());
	int drawY = static_cast<int>(getY());
	int drawWidth = static_cast<int>(getWidth());
	int drawHeight = static_cast<int>(getHeight());

	DrawRectangle(drawX, drawY, drawWidth, drawHeight, WHITE);
}