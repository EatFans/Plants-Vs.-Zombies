//
// Created by EatFan on 2023/11/25.
//

#include "HubScene.h"

HubScene::HubScene(){


}

HubScene::~HubScene() {
    delete background;
}

void HubScene::init() {
    background = res.getImg("hub");
    LogManager::info("大厅场景-背景已经加载！");
}

void HubScene::render(){
    putimage(0,0,background);
}