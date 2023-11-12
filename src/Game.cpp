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


void Game::update() {

}

void Game::render() {

}

void Game::playAudio() {

}

void Game::input() {

}

void Game::run() {

}

/*
int main(){
    //创建游戏对象
    Game game;
    game.run();
    system("pause");
    return 0;
}*/
