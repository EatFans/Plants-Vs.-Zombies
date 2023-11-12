//
// Created by EatFan on 2023/11/12.
//
#include "ResourceManager.h"

using namespace std;
int main (){
    initgraph(900,600,1);
    ResourceManager res;
    res.loadRes("hub","res/ui/hub.png");
    IMAGE* hub = res.getRes("hub");
    putimage(0,0,hub);
    system("pause");
    return 0;
}