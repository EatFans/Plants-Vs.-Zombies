//
// Created by EatFan on 2023/11/12.
//

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
    delete image;
}

/**
 * ������Դ����ͼƬ��Դ���ؽ���Map���У���ʱ������ʹ��
 * @param resourceName ͼƬ��Դ���� string����
 * @param resourcePath ͼƬ��Դ·�� string����
 */
void ResourceManager::loadRes(const std::string& resourceName,const std::string& resourcePath) {


}

/**
 * ����һ����̬��Ա����������ֱ�ӻ�ȡMap�����Ѿ��洢��ͼƬ��Դ
 * @param resourceName ͼƬ��Դ���� string����
 * @return ����һ��ͼƬ��Դ��ָ��
 */
IMAGE* ResourceManager::getRes(const std::string &resourceName) {

    return nullptr;
}