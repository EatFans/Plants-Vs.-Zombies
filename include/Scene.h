//
//  Scene 是一个抽象基类，其中包含了三个纯虚函数：init、update 和 render。这意味着任何派生自 Scene 的子类都必须提供这三个函数的实现。
//  纯虚函数使得 Scene 成为一个抽象类，不能被实例化。它只能用作其他类的基类，其他类需要提供这三个虚函数的实现。
//  我在这里抽象定义了三个场景类的接口，供其他场景去使用
//

#ifndef PLANTS_VS__ZOMBIES_SCENE_H
#define PLANTS_VS__ZOMBIES_SCENE_H

#include <unordered_map>
#include <string>
#include <vector>
#include "ResourceManager.h"

class Scene {
public:
    virtual void init() = 0;
    virtual void update() = 0;
    virtual void render() = 0;
private:
};


#endif //PLANTS_VS__ZOMBIES_SCENE_H
