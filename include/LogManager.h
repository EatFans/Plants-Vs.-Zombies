//
// Created by EatFan on 2023/11/11.
//

#ifndef PLANTS_VS__ZOMBIES_LOGMANAGER_H
#define PLANTS_VS__ZOMBIES_LOGMANAGER_H

#include<iostream>
#include<string>
#include<ctime>

class LogManager { // 静态的工具类
public:
    static void info(const std::string& message);
    static void warn(const std::string& message);
    static void error(const std::string& message);
private:
    static std::string getSystemTime();
};

#endif //PLANTS_VS__ZOMBIES_LOGMANAGER_H
