//
// Created by EatFan on 2023/11/25.
//

#include "HubScene.h"

HubScene::HubScene(){
    res = std::make_unique<ResourceManager>();
    background = nullptr;
}

HubScene::~HubScene() {

}

void HubScene::init() {

    background = res->getImg("hub");

    LogManager::info("开始测试！");
    if (res->getImg("hub") != nullptr){
        LogManager::info("大厅场景-背景已经加载！");
    } else {
        LogManager::info("背景未加载！");
    }
}

void HubScene::render(){
    putimage(0,0,background);
}