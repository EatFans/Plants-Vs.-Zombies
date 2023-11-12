cmake_minimum_required(VERSION 3.25)
project(Plants_Vs__Zombies)

set(CMAKE_CXX_STANDARD 17)

# 设置源文件
set(SOURCES
        src/Game.cpp
        src/LogManager.cpp
        src/ResourceManager.cpp
        src/SceneManager.cpp
        test/test.cpp
        src/Scene.cpp
        )

# 设置头文件目录
include_directories(include)

# 设置库文件
link_directories(lib/EasyX/lib64)
link_libraries(libeasyx.a)

add_executable(Plants_Vs__Zombies ${SOURCES})
