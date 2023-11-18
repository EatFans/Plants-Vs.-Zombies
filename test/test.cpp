//#include <iostream>
//#include <fstream>
//#include "json/json.h"
//
//using namespace std;
//int main(){
//
//    // 构建 JSON 对象并设置数据
//    Json::Value jsonData;
//    jsonData["key1"] = "value1";
//    jsonData["key2"] = 42;
//    jsonData["key3"] = true;
//
//    // 打开文件以写入数据
//    std::ofstream outFile("res/config.json");
//    if (outFile.is_open()) {
//        // 将 JSON 对象写入文件
//        Json::StreamWriterBuilder writerBuilder;
//        std::string jsonString = Json::writeString(writerBuilder, jsonData);
//        outFile << jsonString;
//
//        // 关闭文件，确保数据被保存
//        outFile.close();
//        std::cout << "Data has been written to res/config.json." << std::endl;
//    } else {
//        std::cerr << "Error: Unable to open res/config.json for writing." << std::endl;
//    }
//
//    system("pause");
//    return 0;
//}