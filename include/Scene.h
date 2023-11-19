//
//  Scene ��һ��������࣬���а������������麯����init��update �� render������ζ���κ������� Scene �����඼�����ṩ������������ʵ�֡�
//  ���麯��ʹ�� Scene ��Ϊһ�������࣬���ܱ�ʵ��������ֻ������������Ļ��࣬��������Ҫ�ṩ�������麯����ʵ�֡�
//  �������������������������Ľӿڣ�����������ȥʹ��
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
