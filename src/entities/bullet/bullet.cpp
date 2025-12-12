#include "entities/bullet/bullet.h"

#include "raylib.h"

#include "entities/bullet/bullet_config.h"
#include "game/game_constants.h"

Bullet::Bullet(float x, float y, float width, float height) : Entity(x, y, width, height)
{

}

void Bullet::update()
{
	setX(getX() + BulletConfig::SPEED * GetFrameTime());

	if (getX() > SCREEN_WIDTH)
	{
		setActive(false);
	}
}

void Bullet::draw()
{
	int drawX = static_cast<int>(getX());
	int drawY = static_cast<int>(getY());
	int drawWidth = static_cast<int>(getWidth());
	int drawHeight = static_cast<int>(getHeight());

	DrawRectangle(drawX, drawY, drawWidth, drawHeight, YELLOW);
}