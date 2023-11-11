//
// Created by EatFan on 2023/11/11.
//

#ifndef PLANTS_VS__ZOMBIES_GAME_H
#define PLANTS_VS__ZOMBIES_GAME_H

#include <iostream>
#include <thread>
#include "LogManager.h"
#include "easyx.h"


class Game {
public:
    Game();
    ~Game();
    void run();
    void update();
    void render();
    void playAudio();
    void input();
    bool isRunning();
private:
    int winWidth;
    int winHeight;
    bool runFlag;
};


#endif //PLANTS_VS__ZOMBIES_GAME_H
