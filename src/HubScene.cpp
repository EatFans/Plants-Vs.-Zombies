//
// Created by EatFan on 2023/11/25.
//

#include "HubScene.h"
HubScene::HubScene(){
    res = std::make_unique<ResourceManager2>();
}

HubScene::~HubScene() {

}

void HubScene::init() {


    LogManager::info("��ʼ���ԣ�");
    if (res->getImg("hub") != nullptr){
        LogManager::info("��������-�����Ѿ����أ�");
    } else {
        LogManager::info("����δ���أ�");
    }
}

void HubScene::render(){
//    IMAGE* background = res->getImg("hub");
//    putimage(0,0,background);
}