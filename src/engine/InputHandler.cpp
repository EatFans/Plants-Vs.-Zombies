/**
* ��������ϵͳ
*/
#include "InputHandler.h"

InputHandler::InputHandler() : x(0),y(0) {

}

InputHandler::~InputHandler() {

}

void InputHandler::MouseHandler() {
    MOUSEMSG msg = GetMouseMsg();
    x = msg.x;
    y = msg.y;
}

int InputHandler::getMouseX() {
    return x;
}

int InputHandler::getMouseY() {
    return y;
}

MouseLeftButtonState InputHandler::getMouseLeftButtonState() {
    MOUSEMSG msg = GetMouseMsg();
    if (msg.uMsg == WM_LBUTTONDOWN) {
        LogManager::info("- Mouse left button down (" + std::to_string(getMouseX()) + "��" + std::to_string(getMouseY()) + ")");
        return MOUSE_LEFT_BUTTON_DOWN;
    }
    else if (msg.uMsg == WM_LBUTTONUP) {
        LogManager::info("- Mouse left button up (" + std::to_string(getMouseX()) + "��" + std::to_string(getMouseY()) + ")");
        return MOUSE_LEFT_BUTTON_UP;
    }
    else {
        // ����δƥ�����������ﷵ��Ĭ��ֵ������Ը��������޸�
        return MOUSE_LEFT_UNKNOWN;
    }

}