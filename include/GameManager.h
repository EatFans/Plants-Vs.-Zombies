//
// Created by EatFan on 2023/12/9.
//

#ifndef PLANTS_VS__ZOMBIES_GAMEMANAGER_H
#define PLANTS_VS__ZOMBIES_GAMEMANAGER_H

#include "graphics.h"
#include "LogManager.h"
#include <string>

namespace PVZ
{
    enum pGameState
    {
        Initializing,
        Start,
        Stop
    };
    class GameManager
    {
    public:
        GameManager(int width,int height);
        ~GameManager();
        void winInitialization();
        bool isGameInitialization();
        pGameState getGameState();
        void setGameState(pGameState state);
    private:
        int winWidth;
        int winHeight;
        pGameState gameState;
    };

}


#endif //PLANTS_VS__ZOMBIES_GAMEMANAGER_H
