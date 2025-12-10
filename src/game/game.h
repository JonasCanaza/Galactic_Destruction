#pragma once

#include <vector>

#include "entities/nave/nave.h"

using namespace std;

class Game
{
private:

	bool isRunning;
	vector<Entity*> entities;

	void initNave();

	void update();
	void draw();

public:

	Game();
	~Game();
	void play();

};