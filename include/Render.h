//
// Created by EatFan on 2023/11/25.
//

#ifndef PLANTS_VS__ZOMBIES_RENDER_H
#define PLANTS_VS__ZOMBIES_RENDER_H

#include "graphics.h"

class Render {
public:
    static void putimagePNG(int  picture_x, int picture_y, IMAGE* picture);
    static int getDelay();
private:
    static void _putimagePNG(int  picture_x, int picture_y, IMAGE* picture);
};


#endif //PLANTS_VS__ZOMBIES_RENDER_H
