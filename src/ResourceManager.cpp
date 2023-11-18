//
// Created by EatFan on 2023/11/12.
//

#include <fstream>
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
    for (auto& pair : imageMap){
        delete pair.second;
    }
    imageMap.clear();
    delete image;
}

/**
 * 加载资源，将图片资源加载进入Map池中，随时供后面使用
 * @param resourceName 图片资源名称 string类型
 * @param resourcePath 图片资源路径 string类型
 */
void ResourceManager::loadImg(const std::string& resourceName,const std::string& resourcePath) {
    auto it = imageMap.find(resourceName);
    if (it == imageMap.end()){
        loadimage(image,resourcePath.c_str());
        imageMap[resourceName] = image;
        LogManager::info("图片资源加载成功！");
    }

}

/**
 * 这是一个成员函数，用于直接获取Map池中已经存储的图片资源
 * @param resourceName 图片资源名称 string类型
 * @return 返回一个图片资源的指针
 */
IMAGE* ResourceManager::getImg(const std::string &resourceName) {
    auto it = imageMap.find(resourceName);
    if (it != imageMap.end()){
        LogManager::info("已获取"+resourceName+"图片资源");
        return it->second;
    } else {
        return nullptr;
    }
}


Json::Value ResourceManager::parseJsonFile(const std::string &filePath) {
    // 打开 JSON 文件
    std::ifstream jsonFile(filePath.c_str());
    if (!jsonFile.is_open()) {
        LogManager::warn("无法打开 JSON 文件。");
        return Json::Value();  // 返回空的 Json::Value 对象
    }
    // 使用 Json::CharReaderBuilder 创建 JSON 解析器
    Json::CharReaderBuilder readerBuilder;
    Json::Value root;
    JSONCPP_STRING errs;
    // 解析 JSON 文件
    Json::parseFromStream(readerBuilder, jsonFile, &root, &errs);
    // 关闭 JSON 文件
    jsonFile.close();
    if (!errs.empty()) {
        LogManager::error("解析 JSON 时发生错误："+errs);
        return Json::Value();  // 返回空的 Json::Value 对象
    }
    return root;
}

