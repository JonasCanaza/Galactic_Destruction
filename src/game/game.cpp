#include "game/game.h"

#include "raylib.h"

#include "game_constants.h"
#include "entities/nave/nave_config.h"

void Game::initNave()
{
	const float INITIAL_POS_Y = static_cast<float>(SCREEN_HEIGHT) / 2.0f - NaveConfig::HEIGHT / 2.0f;

	entities.push_back(new Nave(NaveConfig::POS_X, INITIAL_POS_Y, NaveConfig::WIDTH, NaveConfig::HEIGHT));
}

void Game::update()
{
	for (size_t i = 0; i < entities.size(); i++)
	{
		entities[i]->update();
	}
}

void Game::draw()
{
	BeginDrawing();
	ClearBackground(BLACK);
	
	for (size_t i = 0; i < entities.size(); i++)
	{
		entities[i]->draw();
	}

	EndDrawing();
}

Game::Game()
{
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, PROGRAM_NAME.c_str());
	SetExitKey(NULL);

	isRunning = true;

	initNave();
}

Game::~Game()
{
	for (size_t i = 0; i < entities.size(); i++)
	{
		delete entities[i];
		entities[i] = nullptr;
	}
}

void Game::play()
{
    while (!WindowShouldClose() && isRunning)
    {
		update();
		draw();
    }
}