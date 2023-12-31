//
// Created by EatFan on 2023/11/11.
//

#include "Game.h"


Game::Game() : winWidth(WIN_WIDTH), winHeight(WIN_HEIGHT), runFlag(true) {
    // 初始化对象，加载资源
    initgraph(winWidth, winHeight, 1);
    res = new ResourceManager2();
    inputHandler = new InputHandler();
    sceneManager = new SceneManager();
    hub = new HubScene();
}

Game::~Game() {
    delete res;
    delete inputHandler;
    delete sceneManager;
    delete hub;
}

// 游戏初始化
void Game::init() {
    LogManager::info("游戏资源正在加载中...");
    Json::Value resJson = ResourceManager2::parseJsonFile("res/resource.json");
    // 访问解析后的数据
    const Json::Value resources = resJson["resources"];
    for (const auto& resource : resources) {
        std::string name = resource["name"].asString();
        std::string path = resource["path"].asString();
        res->loadImg(name,path);
        LogManager::info(name+"图片资源已加载！");
    }
}

// 游戏启动运行
void Game::run() {
    // 启动线程
    std::thread renderThread(&Game::renderLoop,this);
    std::thread backgroundThread(&Game::backgroundLoop,this);
    LogManager::info("游戏主线程已经启动！");

    hub->init();

    while(runFlag){


        std::this_thread::sleep_for(std::chrono::microseconds(DELAY_TIME));
    }

    // 释放清理线程
    renderThread.join();
    backgroundThread.join();
}

// 游戏渲染
void Game::renderLoop() {
    LogManager::info("游戏渲染线程已经启动！");
    while(runFlag){
        BeginBatchDraw();
//        putimage(0,0,res->getImg("hub"));
//        Render::putimagePNG(474,75,res->getImg("button_0"));
        EndBatchDraw();
        std::this_thread::sleep_for(std::chrono::microseconds(DELAY_TIME));
    }
}

// 游戏后台线程
void Game::backgroundLoop() {
    LogManager::info("游戏后台线程已经启动！");
    while(runFlag){
        inputHandler->MouseHandler();
        inputHandler->isMouseLeftButtonDown();
        inputHandler->isMOuseLeftButtonUp();
        std::this_thread::sleep_for(std::chrono::microseconds(DELAY_TIME));
    }
}

/*
int main() {
    //创建游戏对象
    Game game;
    game.init();
    game.run();
    system("pause");
    return 0;
}
*/
