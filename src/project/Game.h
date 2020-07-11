#pragma once

#include <string>

class Game
{
public:
    explicit Game(std::string name);
    virtual ~Game() = default;

    virtual void OnEntry() = 0;
    virtual void OnExit() = 0;

    virtual void Update() = 0;
    virtual void Draw() = 0;

    [[nodiscard]] const std::string &GetName() const noexcept { return m_name; };

private:
    std::string m_name;

};