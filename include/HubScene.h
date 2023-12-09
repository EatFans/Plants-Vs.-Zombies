//
// Created by EatFan on 2023/11/25.
//

#ifndef PLANTS_VS__ZOMBIES_HUBSCENE_H
#define PLANTS_VS__ZOMBIES_HUBSCENE_H

#include "easyx.h"
#include "ResourceManager2.h"
#include "LogManager.h"
#include "LogManager.h"
#include <memory>

class HubScene {
public:
    HubScene();
    ~HubScene();
    void init();
    void render();
private:
    std::unique_ptr<ResourceManager2> res;
};


#endif //PLANTS_VS__ZOMBIES_HUBSCENE_H
