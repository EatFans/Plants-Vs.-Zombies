//
// Created by EatFan on 2023/11/12.
//

#ifndef PLANTS_VS__ZOMBIES_SCENEMANAGER_H
#define PLANTS_VS__ZOMBIES_SCENEMANAGER_H

#include "Scene.h"

class SceneManager {
public:
    void setScene(Scene* newScene); // 设置场景
    void updateCurrentScene();      // 更新场景
    void renderCurrentScene();      // 渲染场景
private:
    Scene* currentScene;
};

#endif //PLANTS_VS__ZOMBIES_SCENEMANAGER_H