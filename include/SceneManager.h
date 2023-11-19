//
// Created by EatFan on 2023/11/12.
//

#ifndef PLANTS_VS__ZOMBIES_SCENEMANAGER_H
#define PLANTS_VS__ZOMBIES_SCENEMANAGER_H

#include "Scene.h"

class SceneManager {
public:
    void setScene(Scene* newScene); // ���ó���
    void updateCurrentScene();      // ���³���
    void renderCurrentScene();      // ��Ⱦ����
private:
    Scene* currentScene;
};

#endif //PLANTS_VS__ZOMBIES_SCENEMANAGER_H