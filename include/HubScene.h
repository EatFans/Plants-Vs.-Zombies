//
// Created by EatFan on 2023/11/25.
//

#ifndef PLANTS_VS__ZOMBIES_HUBSCENE_H
#define PLANTS_VS__ZOMBIES_HUBSCENE_H

#include "easyx.h"
#include "ResourceManager.h"
#include "LogManager.h"
#include "LogManager.h"

class HubScene {
public:
    HubScene();
    ~HubScene();
    void init();
    void render();
private:
    IMAGE* background;
    ResourceManager res;
};


#endif //PLANTS_VS__ZOMBIES_HUBSCENE_H
