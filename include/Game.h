//
// Created by EatFan on 2023/11/11.
//

#ifndef PLANTS_VS__ZOMBIES_GAME_H
#define PLANTS_VS__ZOMBIES_GAME_H

#define WIN_WIDTH 900
#define WIN_HEIGHT 600
#define DELAY_TIME 16

#include <iostream>
#include <thread>
#include "LogManager.h"
#include "easyx.h"
#include "ResourceManager.h"
#include "InputHandler.h"

class Game {
public:
    Game();
    ~Game();
    void init();
    void run();
private:
    void mainLoop();
    void renderLoop();
    void backgroundLoop();
    void handlerInput();
    int winWidth;
    int winHeight;
    bool runFlag;
    ResourceManager* res;
    InputHandler* inputHandler;

};


#endif //PLANTS_VS__ZOMBIES_GAME_H