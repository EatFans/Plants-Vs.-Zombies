/*
#include "json/json.h"
#include "ResourceManager.h"
#include "LogManager.h"

using namespace std;
int main(){
    Json::Value json = ResourceManager::parseJsonFile("res/resource.json");
    // 访问解析后的数据
    const Json::Value resources = json["resources"];
    for (const auto& resource : resources) {
        std::string name = resource["name"].asString();
        std::string path = resource["path"].asString();
        LogManager::info("资源名称：" + name);
        LogManager::info("资源路径：" + path);
    }

    system("pause");
    return 0;
}
*/
