<!--
  - File Name README.md
  - Version 1.0
  - Author aaron
  - Email wzj020109@163.com
  - Created Time 2022-01-09
-->


# C 练习实例15

## 题目

打印出如下图案（菱形）
```c
   *
  ***
 *****
*******
 *****
  ***
   *
```

## 程序分析

先把图形分成两部分来看待, 前四行一个规律, 后三行一个规律,  <br>
利用双重for循环, 第一层控制行, 第二层控制列;

## 代码

```c
for ( i = 0; i <= 3; i++ ) {
    for ( j = 0; j <= 2 - i; j++ ) {
        printf(" ");
    }
    for ( k = 0; k <= 2*i; k++ ) {
        printf("*");
    }
    printf("\n");
}

for( i = 0; i <= 2; i++ ) {
    for ( j = 0; j <= i; j++ ) {
        printf(" ");
    }
    for ( k = 0; k <= 4 - 2 * i; k++ ) {
        printf("*");
    }
    printf("\n");
}
```
