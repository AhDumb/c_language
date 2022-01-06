<!--
  - File Name README.md
  - Version 1.0
  - Author aaron
  - Email wzj020109@163.com
  - Created Time 2022-01-06
-->

# C 练习实例6

***题目:*** 输出9*9口诀;
***程序分析:*** 分行与列考虑，共 9 行 9 列，i 控制行，j 控制列;

## 代码
```c
for (i = 1; i < 10; i++) {
    for (j = 1; j <= i; j++) {
        result = i * j;
        printf("%d*%d=%-3d", i, j, result); /*-3d表示左对齐，占3位*/
    }
        printf("\n"); /*每一行后换行*/
}
```
