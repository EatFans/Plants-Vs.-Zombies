//
// Created by EatFan on 2023/11/12.
//
#include "ResourceManager.h"

using namespace std;
int main (){
    ResourceManager res;
    res.loadRes("hub","res/ui/hub.png");
    res.getRes("hub");
    system("pause");
    return 0;
}