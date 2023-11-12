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
#include "Main.h"

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
    int winWidth;
    int winHeight;
    bool runFlag;
    ResourceManager* res;

};


#endif //PLANTS_VS__ZOMBIES_GAME_H