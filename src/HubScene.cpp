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

    LogManager::info("��ʼ���ԣ�");
    if (res->getImg("hub") != nullptr){
        LogManager::info("��������-�����Ѿ����أ�");
    } else {
        LogManager::info("����δ���أ�");
    }
}

void HubScene::render(){
    putimage(0,0,background);
}