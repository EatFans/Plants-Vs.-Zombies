/*
#include "json/json.h"
#include "ResourceManager.h"
#include "LogManager.h"

using namespace std;
int main(){
    Json::Value json = ResourceManager::parseJsonFile("res/resource.json");
    // ���ʽ����������
    const Json::Value resources = json["resources"];
    for (const auto& resource : resources) {
        std::string name = resource["name"].asString();
        std::string path = resource["path"].asString();
        LogManager::info("��Դ���ƣ�" + name);
        LogManager::info("��Դ·����" + path);
    }

    system("pause");
    return 0;
}
*/
