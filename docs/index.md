# C 语言学习项目

## 项目结构

```
C语言/
├── src/          # 源代码
│   ├── main.c    # 主入口
│   └── utils/    # 工具模块
├── include/      # 头文件
├── test/         # 测试代码
├── examples/     # 示例程序
├── docs/         # 文档
├── scripts/      # 构建/运行脚本
├── lib/          # 第三方库
├── CMakeLists.txt # CMake 构建配置
└── README.md     # 项目简介
```

## 快速开始

### 使用 CMake 构建

```bash
mkdir build && cd build
cmake ..
cmake --build .
./bin/clearn
```

### 使用脚本

```powershell
.\scripts\build.ps1    # 构建
.\scripts\run.ps1      # 构建并运行
```

### 直接编译

```bash
gcc -o hello examples/hello.c && ./hello
```

## 模块说明

| 模块      | 路径              | 说明         |
|-----------|-------------------|-------------|
| 主程序     | `src/main.c`      | 程序入口     |
| 水果工具   | `src/utils/fruit.c` | 水果管理     |
| 示例代码   | `examples/`       | 语法示例     |
| 测试代码   | `test/`           | 单元测试     |

## 学习路线

1. `examples/hello.c`  — Hello World
2. `examples/loop.c`   — 循环控制
3. `examples/array.c`  — 数组与字符串
4. `examples/pointer.c` — 指针入门
5. `src/main.c`        — 综合练习
