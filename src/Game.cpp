//
// Created by EatFan on 2023/11/11.
//

#include "Game.h"

Game::Game() : winWidth(900), winHeight(600), runFlag(true) {
    // ��ʼ�����󣬼�����Դ
    initgraph(winWidth,winHeight,1);
    res = new ResourceManager();
}

Game::~Game() {
    delete res;
}

// ��Ϸ���߳�
void Game::mainLoop() {
    LogManager::info("��Ϸ���߳��Ѿ�������");
    while(runFlag){

        std::this_thread::sleep_for(std::chrono::microseconds(DELAY_TIME));
    }
}

// ��Ϸ��Ⱦ
void Game::renderLoop() {
    LogManager::info("��Ϸ��Ⱦ�߳��Ѿ�������");
    IMAGE* image = res->getImg("hub");
    while(runFlag){

        putimage(0,0,image);

        std::this_thread::sleep_for(std::chrono::microseconds(DELAY_TIME));
    }
}

// ��Ϸ��̨�߳�
void Game::backgroundLoop() {
    LogManager::info("��Ϸ��̨�߳��Ѿ�������");
    while(runFlag){

        std::this_thread::sleep_for(std::chrono::microseconds(DELAY_TIME));
    }
}


void Game::run() {
    // �����߳�
    std::thread renderThread(&Game::renderLoop,this);
    std::thread backgroundThread(&Game::backgroundLoop,this);
    mainLoop();

    // �ͷ������߳�
    renderThread.join();
    backgroundThread.join();
}

void Game::init() {
    res->loadImg("hub","res/ui/hub.png");
}

int main() {
    //������Ϸ����
    Game game;
    game.init();
    game.run();
    system("pause");
    return 0;
}
