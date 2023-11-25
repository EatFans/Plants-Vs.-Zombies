/**
* 处理输入系统
*/
#include "InputHandler.h"

InputHandler::InputHandler() : x(0),y(0) {}

InputHandler::~InputHandler() {

}

void InputHandler::MouseHandler() {
    MOUSEMSG msg = GetMouseMsg();
    x = msg.x;
    y = msg.y;
    getMouseLeftButtonState();
}

int InputHandler::getMouseX() {
    return x;
}

int InputHandler::getMouseY() {
    return y;
}

bool InputHandler::isMouseLeftButtonDown() {
    MOUSEMSG msg = GetMouseMsg();
    if (msg.uMsg == WM_LBUTTONDOWN) {
        LogManager::info(
                "- Mouse left button down (" + std::to_string(getMouseX()) + "，" + std::to_string(getMouseY()) + ")");
        return true;
    }
}

bool InputHandler::isMOuseLeftButtonUp() {
    MOUSEMSG msg = GetMouseMsg();
    if (msg.uMsg == WM_LBUTTONUP){
        LogManager::info(
                "- Mouse left button up (" + std::to_string(getMouseX()) + ", " + std::to_string(getMouseY()) + ")");
        return true;
    }
}

MouseLeftButtonState InputHandler::getMouseLeftButtonState() {
    MOUSEMSG msg = GetMouseMsg();
    if (msg.uMsg == WM_LBUTTONDOWN) {
        LogManager::info("- Mouse left button down (" + std::to_string(getMouseX()) + "，" + std::to_string(getMouseY()) + ")");
        return MOUSE_LEFT_BUTTON_DOWN;
    }
    else if (msg.uMsg == WM_LBUTTONUP) {
        LogManager::info("- Mouse left button up (" + std::to_string(getMouseX()) + "，" + std::to_string(getMouseY()) + ")");
        return MOUSE_LEFT_BUTTON_UP;
    }
    else {
        // 处理未匹配的情况，这里返回默认值，你可以根据需求修改
        return MOUSE_LEFT_UNKNOWN;
    }

}