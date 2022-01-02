# C 程序结构

## C 程序主要包括以下部分：

- 预处理器指令
    - #include <文件名.h>
- 函数
    - 类型 函数名 (参数)
- 变量
    - 类型 变量名
- 语句 & 表达式
    - 数学表达式
    - for while do...while
- 注释
    - // 行注释
    - /** */ 块注释

```c
#include <stdio.h>

int main() {
    printf("Hello, World! \n");
    return 0;
}
```
## 编译 & 执行 C 程序

1. 打开文件并添加上面的代码
2. 保存文件,文件名为 `hello.c`
3. 打开 命令提示符 或者 终端 并进入文件所在的目录
4. 输入 `gcc hello.c`, 编译代码
5. 如果没错目录下会生成二进制文件
6. 输入 ./hello 或者 ./hello.out
7. 屏幕会打印出 `Hello World!`
