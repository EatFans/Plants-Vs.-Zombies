//
// Scene 类 是一个抽象出来的基类，在这里的 HubScene 类继承了Scene类，是作为 Scene 类的派生类
//

#ifndef PLANTS_VS__ZOMBIES_HUBSCENE_H
#define PLANTS_VS__ZOMBIES_HUBSCENE_H

#include "Scene.h"

class HubScene : public Scene {
    void init() override;
    void update() override;
    void render() override;
};


#endif //PLANTS_VS__ZOMBIES_HUBSCENE_H
