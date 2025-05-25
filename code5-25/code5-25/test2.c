#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		//{}代码的规范
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
		//else和最近的if语句匹配
		//if，else合起来是一条语句

	}
		


	return 0;
}