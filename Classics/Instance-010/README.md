<!--
  - File Name README.md
  - Version 1.0
  - Author aaron
  - Email wzj020109@163.com
  - Created Time 2022-01-07
-->

# C 练习实例9

***题目:*** 输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数. <br>
***程序分析:*** 利用while语句,条件为输入的字符不为'\n';

## 代码
```c
while ( (c = getchar()) != '\n' ) {
    if ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) {
        letters++;
    } else if ( c >= '0' && c <= '9' ) {
        digits++;
    } else if ( c == ' ' ) {
        spaces++;
    } else {
        others++;
    }
}
```

