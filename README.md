# 植物大战僵尸 C++

## 介绍：
本项目是基于EasyX图形库，开发的游戏项目。

## 项目路径
```
Plants-Vs.-Zombies
|
|----- include   // 头文件
|
|----- lib      // 外部库
|       |- EasyX
|           |- lib64
|               |- libeasyx.a   // EasyX图形库静态库
|           
|
|----- res      // 资源文件
|       |- ui
|       |- map
|       |- audio
|       |- plants
|       |- zombies
| 
|----- src      // 源码文件
|
|----- CMakeLists.txt  // Cmake项目控制
```


***
## 类介绍：

**LogManager类：** 该类是一个静态工具类，用于对日志的输出
- info() 正常日志输出打印
- warn() 警告日志输出打印
- error() 错误日志输出打印

**Game类：** 该类包含整个游戏逻辑的函数，初始化游戏、更新、渲染、输入监听等游戏循环的主要的类
- Game() 构造函数，初始化，加载资源
- ~Game() 构析函数，释放内存，清理对象
- run() 启动游戏
- update() 游戏更新
- render() 游戏渲染
- playAudio() 播放游戏音频音效
- input() 用户输入

**ResourceManager类：** 该类掌管控制着资源的加载管理
- loadRes() 