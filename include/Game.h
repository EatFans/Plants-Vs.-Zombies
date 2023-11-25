//
// Created by EatFan on 2023/11/11.
//

#ifndef PLANTS_VS__ZOMBIES_GAME_H
#define PLANTS_VS__ZOMBIES_GAME_H

#include <iostream>
#include <thread>
#include "LogManager.h"
#include "easyx.h"
#include "ResourceManager.h"
#include "InputHandler.h"
#include "SceneManager.h"

class Game {
public:
    Game();
    ~Game();
    void init();
    void run();
private:
    const int WIN_WIDTH = 900;
    const int WIN_HEIGHT = 600;
    const int DELAY_TIME = 16;
    void renderLoop();
    void backgroundLoop();
    int winWidth;
    int winHeight;
    bool runFlag;
    ResourceManager* res;
    InputHandler* inputHandler;
    SceneManager* sceneManager;


};


#endif //PLANTS_VS__ZOMBIES_GAME_H