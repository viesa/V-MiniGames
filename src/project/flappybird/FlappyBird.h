#pragma once

#include "Game.h"
#include "Camera.h"

class FlappyBird : public Game
{
public:
    FlappyBird();

    void OnEntry() override;
    void OnExit() override;

    void Update() override;
    void Draw() override;

private:

};


