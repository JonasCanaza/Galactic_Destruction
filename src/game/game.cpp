#include "game/game.h"

#include "raylib.h"

#include "game_constants.h"

void Game::draw()
{
	BeginDrawing();

	ClearBackground(BLACK);
	DrawText("Window started", 0, 0, 24, WHITE);

	EndDrawing();
}

Game::Game()
{
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, PROGRAM_NAME.c_str());
	SetExitKey(NULL);

	isRunning = true;
}

void Game::play()
{
    while (!WindowShouldClose() && isRunning)
    {
		draw();
    }
}