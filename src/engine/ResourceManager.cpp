//
// Created by EatFan on 2023/11/12.
//

#include "ResourceManager.h"

/**
 * 构造函数，初始化分配图片内存
 *
 */
ResourceManager::ResourceManager() {
    image = new IMAGE();
}

/**
 * 构析函数，释放清理已经分配的图片内存
 */
ResourceManager::~ResourceManager() {
    delete image;
}

/**
 * 加载资源，将图片资源加载进入Map池中，随时供后面使用
 * @param resourceName 图片资源名称 string类型
 * @param resourcePath 图片资源路径 string类型
 */
void ResourceManager::loadRes(const std::string& resourceName,const std::string& resourcePath) {


}

/**
 * 这是一个静态成员函数，用于直接获取Map池中已经存储的图片资源
 * @param resourceName 图片资源名称 string类型
 * @return 返回一个图片资源的指针
 */
IMAGE* ResourceManager::getRes(const std::string &resourceName) {

    return nullptr;
}