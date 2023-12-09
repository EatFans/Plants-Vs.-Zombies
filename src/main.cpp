#include <iostream>
#include "GameManager.h"
#include "ResourceManager.h"

void pResourceInitialization(PVZ::GameManager iGameManager)
{
    if (iGameManager.isGameInitialization())
    {
        LogManager::info("游戏资源正在加载中...");
    }
}

int main()
{
    /*  初始化   */
    PVZ::GameManager gameManager(900,600);
    gameManager.winInitialization();
    Engine::ResourceManager resourceManager;
    pResourceInitialization(gameManager);

    /*  多线程初始化  */


    /*  游戏主循环   */
    while ( TRUE )
    {
        if (gameManager.getGameState() == PVZ::Stop)
            break;
    }

    // 释放内存和资源

    system("pause");
    return 0;
}