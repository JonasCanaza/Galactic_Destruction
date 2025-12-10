#include "entities/nave/nave.h"

#include "raylib.h"

#include "entities/nave/nave_config.h"
#include <game/game_constants.h>

Nave::Nave(float x, float y, float width, float height) : Entity(x, y, width, height)
{

}

void Nave::update()
{
	float newY = getY();

	if (IsKeyDown(KEY_W))
	{
		newY -= NaveConfig::SPEED * GetFrameTime();
	}

	if (IsKeyDown(KEY_S))
	{
		newY += NaveConfig::SPEED * GetFrameTime();
	}

	if (newY < 0)
	{
		newY = 0;
	}

	if (newY + getHeight() > SCREEN_HEIGHT)
	{
		newY = SCREEN_HEIGHT - getHeight();
	}

	setY(newY);
}

void Nave::draw()
{
	int drawX = static_cast<int>(getX());
	int drawY = static_cast<int>(getY());
	int drawWidth = static_cast<int>(getWidth());
	int drawHeight = static_cast<int>(getHeight());

	DrawRectangle(drawX, drawY, drawWidth, drawHeight, WHITE);
}