#pragma once

#include "IScreen.h"

class AppServer;

class ServerMainScreen : public IScreen
{
public:
    ServerMainScreen(AppServer &parent);
    ~ServerMainScreen();

    virtual void Build() override;

    virtual void Destroy() override;

    virtual void OnEntry() override;

    virtual void OnExit() override;

    virtual void Update() override;

    virtual void Draw() override;

    virtual int GetNextScreenIndex() const override;

    virtual int GetPreviousScreenIndex() const override;

private:
    AppServer &m_parent;
};