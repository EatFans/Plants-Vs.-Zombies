//
// Created by EatFan on 2023/12/9.
//

#include "GameManager.h"

using namespace PVZ;

GameManager::GameManager(int width, int height) : winWidth(width),winHeight(height),gameState(Initializing) {}

GameManager::~GameManager() = default;

void GameManager::winInitialization()
{
    if (gameState == Initializing)
    {
        initgraph(winWidth,winHeight,1);
        LogManager::info("��Ϸ���ڳ�ʼ�������ɹ���");
    }
}

bool GameManager::isGameInitialization()
{
    if (gameState == Initializing)
        return true;
    else
        return false;
}

pGameState GameManager::getGameState()
{
    return gameState;
}

void GameManager::setGameState(PVZ::pGameState state)
{
    gameState = state;
}

