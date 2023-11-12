//
// Created by EatFan on 2023/11/12.
//

#ifndef PLANTS_VS__ZOMBIES_RESOURCEMANAGER_H
#define PLANTS_VS__ZOMBIES_RESOURCEMANAGER_H

#include <map>
#include <string>
#include "easyx.h"
#include "graphics.h"
#include "LogManager.h"

class ResourceManager {
public:
    ResourceManager();
    ~ResourceManager();

    void loadImg(const std::string& resourceName,const std::string& resourcePath);
    IMAGE* getImg(const std::string& resourceName);
private:
    IMAGE* image;
    std::map<std::string, IMAGE*> imageMap;

};


#endif //PLANTS_VS__ZOMBIES_RESOURCEMANAGER_H
