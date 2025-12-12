#pragma once

#include "entities/entity.h"

class Bullet : public Entity
{
private:



public:

    Bullet(float x, float y, float width, float height);

    void update() override;
    void draw() override;

};