//#include <iostream>
//#include <fstream>
//#include "json/json.h"
//
//using namespace std;
//int main(){
//
//    // ���� JSON ������������
//    Json::Value jsonData;
//    jsonData["key1"] = "value1";
//    jsonData["key2"] = 42;
//    jsonData["key3"] = true;
//
//    // ���ļ���д������
//    std::ofstream outFile("res/config.json");
//    if (outFile.is_open()) {
//        // �� JSON ����д���ļ�
//        Json::StreamWriterBuilder writerBuilder;
//        std::string jsonString = Json::writeString(writerBuilder, jsonData);
//        outFile << jsonString;
//
//        // �ر��ļ���ȷ�����ݱ�����
//        outFile.close();
//        std::cout << "Data has been written to res/config.json." << std::endl;
//    } else {
//        std::cerr << "Error: Unable to open res/config.json for writing." << std::endl;
//    }
//
//    system("pause");
//    return 0;
//}