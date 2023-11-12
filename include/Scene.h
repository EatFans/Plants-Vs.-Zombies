//
// Created by EatFan on 2023/11/12.
//

#ifndef PLANTS_VS__ZOMBIES_SCENE_H
#define PLANTS_VS__ZOMBIES_SCENE_H

#include <unordered_map>
#include <string>
#include <vector>
#include "GameObject.h"

class Scene {
public:
    Scene();
    ~Scene();
    void addGameObject(GameObject* gameObject);
private:
    std::vector<GameObject*> gameObject;
};


#endif //PLANTS_VS__ZOMBIES_SCENE_H
