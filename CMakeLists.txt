cmake_minimum_required(VERSION 3.25)
project(Plants_Vs__Zombies)

set(CMAKE_CXX_STANDARD 17)

# 给libgcc、libstdc++库链接静态库
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")


# 设置源文件
set(SOURCES
        src/Game.cpp
        src/engine/LogManager.cpp
        src/engine/ResourceManager2.cpp
        src/engine/SceneManager.cpp
        test/test.cpp
        src/engine/InputHandler.cpp
        src/HubScene.cpp
        src/engine/Render.cpp
        src/main.cpp src/GameManager.cpp
        src/engine/ResourceManager.cpp)

# 设置头文件目录
include_directories(include)
include_directories(include/json)

# 指定链接目录
link_directories(
        lib/EasyX/lib64
        lib/JsonCpp/lib64
)

add_executable(Plants_Vs__Zombies ${SOURCES})

#链接库
target_link_libraries(Plants_Vs__Zombies PRIVATE
        libeasyx.a
        libpthread.a
        libjsoncpp.a
        )