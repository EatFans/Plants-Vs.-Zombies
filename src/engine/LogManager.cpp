//
// Created by EatFan on 2023/11/11.
//
#include "LogManager.h"


void LogManager::info(const std::string& message) {
    std::string format = "[" + getSystemTime() + " INFO]";
    std::cout << format << message << "\n";
}

void LogManager::warn(const std::string& message) {
    std::string format = "[" + getSystemTime() + " WARN]";
    std::cout << format << message << "\n";
}

void LogManager::error(const std::string& message) {
    std::string format = "[" + getSystemTime() + " ERROR]";
    std::cout << format << message << "\n";
}

std::string LogManager::getSystemTime() {
    time_t now = time(0);
    tm ltm;
    localtime_s(&ltm, &now);

    // ʹ�� std::to_string ������ֵת��Ϊ�ַ����������и�ʽ��
    std::string time = std::to_string(ltm.tm_hour) + ":" +
                       std::to_string(ltm.tm_min) + ":" +
                       std::to_string(ltm.tm_sec);
    return time;
}