#include <iostream>
#include "GameManager.h"
#include "ResourceManager.h"

void pResourceInitialization(PVZ::GameManager iGameManager)
{
    if (iGameManager.isGameInitialization())
    {
        LogManager::info("��Ϸ��Դ���ڼ�����...");
    }
}

int main()
{
    /*  ��ʼ��   */
    PVZ::GameManager gameManager(900,600);
    gameManager.winInitialization();
    Engine::ResourceManager resourceManager;
    pResourceInitialization(gameManager);

    /*  ���̳߳�ʼ��  */


    /*  ��Ϸ��ѭ��   */
    while ( TRUE )
    {
        if (gameManager.getGameState() == PVZ::Stop)
            break;
    }

    // �ͷ��ڴ����Դ

    system("pause");
    return 0;
}