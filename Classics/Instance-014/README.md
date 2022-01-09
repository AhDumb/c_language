<!--
  - File Name README.md
  - Version 1.0
  - Author aaron
  - Email wzj020109@163.com
  - Created Time 2022-01-09
-->


# C 练习实例14

## 题目

两个乒乓球队进行比赛, 各出三人, 甲队为a, b, c三人，乙队为x, y, z三人.<br> 
已抽签决定比赛名单. 有人向队员打听比赛的名单. a说他不和x比, c说他不和x, z比, 请编程序找出三队赛手的名单;

## 代码
```c
for ( a = x; a <= z; a++ ) {
    for ( b = x; b <= z; b++ ) {
        for ( c = x; c <= z; c++ ) {
            if ( a != x && c != x && c != z && a != b && b != c && a != c ) {
                printf("a = %c\nb = %c\nc = %c\n", a, b, c);
            }
        }
    }
}
```
