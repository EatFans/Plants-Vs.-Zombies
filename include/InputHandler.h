//
// Created by EatFan on 2023/11/18.
//

#ifndef PLANTS_VS__ZOMBIES_INPUTHANDLER_H
#define PLANTS_VS__ZOMBIES_INPUTHANDLER_H

#include <easyx.h>
#include <graphics.h>
#include <string>
#include "LogManager.h"

enum MouseLeftButtonState {
    MOUSE_LEFT_BUTTON_DOWN,
    MOUSE_LEFT_BUTTON_UP,
    MOUSE_LEFT_UNKNOWN
};

class InputHandler {
public:
    InputHandler();
    ~InputHandler();
    void MouseHandler();
    int getMouseX();
    int getMouseY();
    MouseLeftButtonState getMouseLeftButtonState();
private:
    int x;
    int y;
};

#endif //PLANTS_VS__ZOMBIES_INPUTHANDLER_H
