//
// Created by EatFan on 2023/11/11.
//

#include "Game.h"

Game::Game() : winWidth(WIN_WIDTH), winHeight(WIN_HEIGHT), runFlag(true) {
    // ��ʼ�����󣬼�����Դ
    initgraph(winWidth,winHeight,1);
    res = new ResourceManager();
}

Game::~Game() {
    delete res;
}

// ��Ϸ��ʼ��
void Game::init() {
    LogManager::info("��Ϸ��Դ���ڼ�����...");
    Json::Value resJson = ResourceManager::parseJsonFile("res/resource.json");
    // ���ʽ����������
    const Json::Value resources = resJson["resources"];
    for (const auto& resource : resources) {
        std::string name = resource["name"].asString();
        std::string path = resource["path"].asString();
        res->loadImg(name,path);
        LogManager::info(name+"ͼƬ��Դ�Ѽ��أ�");
    }
}

// ��Ϸ��������
void Game::run() {
    // �����߳�
    std::thread renderThread(&Game::renderLoop,this);
    std::thread backgroundThread(&Game::backgroundLoop,this);
    mainLoop();

    // �ͷ������߳�
    renderThread.join();
    backgroundThread.join();
}

// ��Ϸ�����û�����
void Game::handlerInput() {
    MOUSEMSG msg = GetMouseMsg();
    if (msg.uMsg == WM_LBUTTONDOWN){
        LogManager::info("�û����ڵ�����");
    }
    if (msg.uMsg == WM_LBUTTONUP) {
        LogManager::info("�û������ɿ����");
    }
}

// ��Ϸ���߳�
void Game::mainLoop() {
    LogManager::info("��Ϸ���߳��Ѿ�������");
    while(runFlag){
        handlerInput();
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

int main() {
    //������Ϸ����
    Game game;
    game.init();
    game.run();
    system("pause");
    return 0;
}
