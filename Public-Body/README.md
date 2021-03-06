# C 共用体

***公共体*** 是一种特殊的数据类型, 允许您在相同的内存位置存储不同的数据类型. 您可以定义一个带有多成员的共用体,
但是任何时候只能有一个成员带有值. 共用体提供了一种使用相同的内存位置的有效方式.

## 定义共用体
> 定义 ***公共体*** 必须使用 `union` 语句 `union` 语句定义一个新的数据类型, 带着多个成员.

`union` 语句的格式如下:
```c
union [union tag] {
    member definition;
    member definition;
    ....
} [one or more union variables];
```
例如:
```c
union Data {
    int i;
    float f;
    char str[20];
} data;
```
根据上面定义的公共体, `Data` 类型的变量可以存储一个整数, 一个浮点数, 或者一个字符串. <br>
一个变量( 相同的内存位置 ) 可以存储多个类型的数据. 也就是同一时间只能访问公共体里的值.


