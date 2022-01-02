# C 结构体

C 数组允许定义可存储相同类型数据项的变量, **结构**是 C
编程中另一种用户自定义的可用的数据类型,它允许您存储不同类型的数据项.

## 定义结构
为了定义结构,您必须使用 `struct` 语句. `struct` struct 语句定义了一个包含多个成员的新的数据类型. <br> 
`struct` 语句的格式如下:
```c
struct tag {
    member-list
    member-list
    ...
} variable-list;
```

`tag` 是结构体标签. <br>
`member-list` 是标准的变量定义, 比如 `int i;` 或者 `float f`, 或者其他有效的变量定义. <br>
`variable-list` 结构变量, 定义在结构的末尾, 最后一个分号之前, 您可以指定一个或多个结构变量.

一般情况下, `tag`, `member-list`, `variable-list` 这 3 部分至少要出现 2 个. 以下为实例: <br>
```c
//此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
//同时又声明了结构体变量s1
//这个结构体并没有标明其标签
struct {
    int a;
    char b;
    double c;
} s1;

//此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
//结构体的标签被命名为SIMPLE,没有声明变量
struct SIMPLE {
    int a;
    char b;
    double c;
}
//用SIMPLE标签的结构体，另外声明了变量t1、t2、t3
struct SIMPLE t1, t2[20], *t3;

//也可以用typedef创建新类型
typedef struct {
    int a;
    char b;
    double c;
} Simple2;
//现在可以用Simple2作为类型声明新的结构体变量
Simple2 u1, u2[20], *u3;
```
其他声明: <br>
```c
//此结构体的声明包含了其他的结构体
struct COMPLEX {
    char string[100];
    struct SIMPLE a;
};

//此结构体的声明包含了指向自己类型的指针
struct NODE {
    char string[100];
    struct NODE *next_node;
};

struct B;    //对结构体B进行不完整声明

//结构体A中包含指向结构体B的指针
struct A {
    struct B *partner;
    //other members;
};

//结构体B中包含指向结构体A的指针，在A声明完后，B也随之进行声明
struct B {
    struct A *partner;
    //other members;
}
```
