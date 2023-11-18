//
// Created by EatFan on 2023/11/12.
//

#include <fstream>
#include "ResourceManager.h"

/**
 * ���캯������ʼ������ͼƬ�ڴ�
 *
 */
ResourceManager::ResourceManager() {
    image = new IMAGE();
}

/**
 * �����������ͷ������Ѿ������ͼƬ�ڴ�
 */
ResourceManager::~ResourceManager() {
    for (auto& pair : imageMap){
        delete pair.second;
    }
    imageMap.clear();
    delete image;
}

/**
 * ������Դ����ͼƬ��Դ���ؽ���Map���У���ʱ������ʹ��
 * @param resourceName ͼƬ��Դ���� string����
 * @param resourcePath ͼƬ��Դ·�� string����
 */
void ResourceManager::loadImg(const std::string& resourceName,const std::string& resourcePath) {
    auto it = imageMap.find(resourceName);
    if (it == imageMap.end()){
        loadimage(image,resourcePath.c_str());
        imageMap[resourceName] = image;
        LogManager::info("ͼƬ��Դ���سɹ���");
    }

}

/**
 * ����һ����Ա����������ֱ�ӻ�ȡMap�����Ѿ��洢��ͼƬ��Դ
 * @param resourceName ͼƬ��Դ���� string����
 * @return ����һ��ͼƬ��Դ��ָ��
 */
IMAGE* ResourceManager::getImg(const std::string &resourceName) {
    auto it = imageMap.find(resourceName);
    if (it != imageMap.end()){
        LogManager::info("�ѻ�ȡ"+resourceName+"ͼƬ��Դ");
        return it->second;
    } else {
        return nullptr;
    }
}


Json::Value ResourceManager::parseJsonFile(const std::string &filePath) {
    // �� JSON �ļ�
    std::ifstream jsonFile(filePath.c_str());
    if (!jsonFile.is_open()) {
        LogManager::warn("�޷��� JSON �ļ���");
        return Json::Value();  // ���ؿյ� Json::Value ����
    }
    // ʹ�� Json::CharReaderBuilder ���� JSON ������
    Json::CharReaderBuilder readerBuilder;
    Json::Value root;
    JSONCPP_STRING errs;
    // ���� JSON �ļ�
    Json::parseFromStream(readerBuilder, jsonFile, &root, &errs);
    // �ر� JSON �ļ�
    jsonFile.close();
    if (!errs.empty()) {
        LogManager::error("���� JSON ʱ��������"+errs);
        return Json::Value();  // ���ؿյ� Json::Value ����
    }
    return root;
}

