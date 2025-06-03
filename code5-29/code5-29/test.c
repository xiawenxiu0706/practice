#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	//while循环打印1-10---------------------------------------------------------
	//break;
	//终止整个循环
	//跳过本次循环，continue后面的代码，直接判断是否进行下一次循环
	//int i = 1;
	//while (i <= 10)
	//{
	//	i++;
	//	if (5 == i)
	//		
	//		continue;
	//	
	//	printf("%d ", i);

	//}

	//getchar()--------------------------------------------------------------
	//int ch = getchar();
	////getchar返回值类型int，
	////可以存储字符ASCII码和整型
	//EOF;//end of file 宏定义为-1
	//printf("%c\n", ch);//打印方法1
	//putchar(ch);//打印方法2


	//int ch = 0;
	//while ((ch = getchar() )!= EOF)
	//	//ctrl+z返回eof,结束循环
	//	//getchar分别在输入缓冲区读取了字符和\n两个值
	//	//用来清理缓冲区
	//{
	//	putchar(ch);
	//}


	//getchar的应用----------------------------------------------------------
	//char password[20] = { 0 };
	////语法糖，数组定义及初始化，数组即指针（地址）
	//printf("请输入密码：>");
	//scanf("%s", password);
	////scanf函数不读字符\n和空格
	////gets()可以都一行，保留空格
	//int a = 0;
	//while ((a = getchar()) != '\n')
	//	//while循环getchar知道最后一个字符\n
	//	//清空输入缓冲区
	//{
	//	;
	//}
	//printf("请确认密码（Y/N）：>");
	//int ret = getchar();
	////输入缓冲区已清空
	////等待输入新字符
	//if ('Y' == ret)
	//{
	//	printf("yes\n");
	//}
	//else
	//{
	//	printf("no\n");
	//}


	//代码练习ASCII码-------------------------------------------------------



	return 0;
}