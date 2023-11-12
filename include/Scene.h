//
// Created by EatFan on 2023/11/12.
//

#ifndef PLANTS_VS__ZOMBIES_SCENE_H
#define PLANTS_VS__ZOMBIES_SCENE_H

#include <unordered_map>
#include <string>
#include <vector>
#include "ResourceManager.h"

enum class SceneType {
    Hub,
    Level
};

class Scene {
public:
    Scene();
    ~Scene();
    void render();
private:
    int x;
    int y;
    std::string sceneName;
};


#endif //PLANTS_VS__ZOMBIES_SCENE_H
