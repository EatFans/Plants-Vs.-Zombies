//
// Created by EatFan on 2023/12/9.
//

#ifndef PLANTS_VS__ZOMBIES_RESOURCEMANAGER_H
#define PLANTS_VS__ZOMBIES_RESOURCEMANAGER_H

#include "graphics.h"
#include "easyx.h"

namespace Engine
{
    class ResourceManager
    {
    public:
        ResourceManager();
        ~ResourceManager();

    private:
        IMAGE* img;
    };
}



#endif //PLANTS_VS__ZOMBIES_RESOURCEMANAGER_H
