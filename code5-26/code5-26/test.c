#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	////判断一个数是否为奇数
	//int num = 0;
	//scanf("%d", &num);
	//if (1 == num % 2)//表达式本身不能赋值
	//	printf("奇数\n");
	//else
	//	printf("no\n");


	//输出1-100之间的奇数
	int i = 1;
	
	while (i <= 100)//循环100次
	{
		if (i % 2 == 1)
		{
			printf("%d\n", i);
		}
		i++;

	}


	return 0;
}