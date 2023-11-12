//
// Created by EatFan on 2023/11/11.
//

#include "Game.h"

Game::Game() : winWidth(900), winHeight(600), runFlag(true) {
    // 初始化对象，加载资源
    initgraph(winWidth,winHeight,1);
    res = new ResourceManager();
}

Game::~Game() {
    delete res;
}

// 游戏主线程
void Game::mainLoop() {
    LogManager::info("游戏主线程已经启动！");
    while(runFlag){

        std::this_thread::sleep_for(std::chrono::microseconds(DELAY_TIME));
    }
}

// 游戏渲染
void Game::renderLoop() {
    LogManager::info("游戏渲染线程已经启动！");
    IMAGE* image = res->getImg("hub");
    while(runFlag){

        putimage(0,0,image);

        std::this_thread::sleep_for(std::chrono::microseconds(DELAY_TIME));
    }
}

// 游戏后台线程
void Game::backgroundLoop() {
    LogManager::info("游戏后台线程已经启动！");
    while(runFlag){

        std::this_thread::sleep_for(std::chrono::microseconds(DELAY_TIME));
    }
}


void Game::run() {
    // 启动线程
    std::thread renderThread(&Game::renderLoop,this);
    std::thread backgroundThread(&Game::backgroundLoop,this);
    mainLoop();

    // 释放清理线程
    renderThread.join();
    backgroundThread.join();
}

void Game::init() {
    res->loadImg("hub","res/ui/hub.png");
}

int main() {
    //创建游戏对象
    Game game;
    game.init();
    game.run();
    system("pause");
    return 0;
}
