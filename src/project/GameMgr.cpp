#include "GameMgr.h"

GameMgr::GameMgr()
        : m_activeGame("Flappy Bird")
{
    m_games.emplace(std::make_pair("Flappy Bird", new FlappyBird));

    m_games[m_activeGame]->OnEntry();
}

GameMgr::~GameMgr()
{
    m_games[m_activeGame]->OnExit();
    for(auto& [name, game] : m_games)
    {
        delete game;
        game = nullptr;
    }
}

void GameMgr::Update()
{
    m_games[m_activeGame]->Update();
}

void GameMgr::Draw()
{
    m_games[m_activeGame]->Draw();
}

void GameMgr::ChangeGame(const std::string &name)
{
    if(name != m_activeGame && m_games.find(name) != m_games.end())
    {
        m_games[m_activeGame]->OnExit();
        m_activeGame = name;
        m_games[m_activeGame]->OnEntry();
    }
}

