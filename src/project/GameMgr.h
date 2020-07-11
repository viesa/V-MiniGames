#pragma once

#include <map>

#include "FlappyBird.h"

class GameMgr
{
public:
    GameMgr();
    ~GameMgr();

    void Update();
    void Draw();

    void ChangeGame(const std::string &name);

private:
    std::map<std::string, Game *> m_games;
    std::string m_activeGame;
};


