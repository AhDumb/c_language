<!--
  - File Name README.md
  - Version 1.0
  - Author aaron
  - Email wzj020109@163.com
  - Created Time 2022-01-06
-->


# C 练习实例7 - 水仙花数

> 水仙花数: 各位数字立方和等于该数本身 <br>
例如: 153 = 1<sup>3</sup> + 5<sup>3</sup> + 3<sup>3</sup>

***题目:*** 输出 100 - 999 里的所有水仙花数 <br>
***程序分析:*** 利用for循环控制100-999个数，每个数分解出个位，十位，百位;

## 代码
```c
for (i = 10; i < 1000; i++) {

    x = i % 10; // 获取 个位
    y = i / 10 % 10; // 十位
    z = i / 100 % 10;// 百位

    if ( i == ( x * x * x + y * y * y + z * z *z ) ) {
        printf("%d\n", i);
    }
}

```

