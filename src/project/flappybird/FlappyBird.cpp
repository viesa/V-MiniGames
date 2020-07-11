#include <dshow.h>
#include "FlappyBird.h"

FlappyBird::FlappyBird()
    : Game("Flappy Bird")
{

}

void FlappyBird::OnEntry()
{
    log_info("I am entering");
}

void FlappyBird::OnExit()
{
    log_info("I am exiting");
}


void FlappyBird::Update()
{
    log_info("I am updated");
}

void FlappyBird::Draw()
{
    log_info("I am drawn");
}