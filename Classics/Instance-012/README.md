<!--
  - File Name README.md
  - Version 1.0
  - Author aaron
  - Email wzj020109@163.com
  - Created Time 2022-01-08
-->


# C 练习实例12 - 小球自由下落

***题目:*** 一球从100米高度自由落下, 每次落地后反跳回原高度的一半; 再落, 下求它在第10次落地时, 共经过多少米? 第10次反弹多高?

## 代码
```c
h = h / 2; /* 第一次反弹的高度 */

for (int i = 2; i <= 10; i++) {
    s = s + 2 * h;
    h = h / 2;
    printf("第%d反弹的高度: %f\n", i, h);
}
```

