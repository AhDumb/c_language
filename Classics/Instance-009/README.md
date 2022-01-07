<!--
  - File Name README.md
  - Version 1.0
  - Author aaron
  - Email wzj020109@163.com
  - Created Time 2022-01-07
-->


# C 练习实例9

***题目:*** 输入成绩判断等级, 成绩大于等于90为A, 成绩在89-60为B, 小于60为C <br>

## 分析

> 条件运算符: 是一个程序开发的术语，优先级高于赋值、逗号运算符，低于其他运算符; <br>
例如: ( a > b ) ? a : b

利用 *条件运算符* : <br>
如果使用 *条件运算符* 需要嵌套
```c
grade = ( score >= 90 ) ? 'A' : (( score >= 60 ) ? 'B' : 'C')
```
这个不难理解

---

利用 `if / else if / else` : <br>
```c
if ( score >= 90 ) {
    grade = 'A';
} else if ( score >= 60 ) {
    grade = 'B';
} else {
    grade = 'C';
}
```

---

相对来说我更推荐使用 ****条件运算符****
