//
// Created by EatFan on 2023/11/12.
//

#ifndef PLANTS_VS__ZOMBIES_GAMEOBJECT_H
#define PLANTS_VS__ZOMBIES_GAMEOBJECT_H


class GameObject {
public:
    GameObject();
    ~GameObject();
    int getX();
    int getY();
private:
    int x;
    int y;
};


#endif //PLANTS_VS__ZOMBIES_GAMEOBJECT_H
