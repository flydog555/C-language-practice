//while循环的基本结构：
//while(表达式)
//   循环语句;

//在while循环中，break用于永久的终止循环；continue用于跳过本次循环中contine后的所有代码

//EOF-end of file-文件结束标志

//scanf/getchar的工作原理
//  scanf/getchar（输入）->        缓冲区
//                        |-------------------|
//                        |      12345\n      |
//                        |                   |
//                        |-------------------|
//第一个scanf/getchar读取12345；第二个scanf会直接读取\n

//getchar读取字符或数字，返回的是int整型（ASCII码值）

//决定while循环的三个部分：初始化，判断，调整

//for循环解决了while循环 初始化，判断，调整 三部分距离过远的问题