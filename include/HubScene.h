//
// Scene �� ��һ����������Ļ��࣬������� HubScene ��̳���Scene�࣬����Ϊ Scene ���������
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
