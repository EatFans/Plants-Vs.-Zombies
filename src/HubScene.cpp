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
    LogManager::info("��������-�����Ѿ����أ�");
}

void HubScene::render(){
    putimage(0,0,background);
}