#define _CRT_SECURE_NO_WARNINGS
//BC32 输出学生信息 学生信息管理系统
//#include<stdio.h>
//int main()
//{
//	printf("name    age    gender\n");
//	printf("---------------------\n"); 
//	printf("jack    18     man\n");
//	return 0;
//}

//BC31 发布信息
//#include<stdio.h>

//int main()
//{
//	printf("I lost my cellphone!\n");
//
//	return 0;
//}


//BC17 计算表达式的值
//#include<stdio.h>
//
//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d", (-8 + 22) * a - 10 + c / 2);
//
//	return 0;
//}


#include<stdio.h>
//int main()
//{
//	char arr[8] = { 'b','i','t' };
//	//不完全初始化
//	printf("%d\n", strlen(arr));
//
//	return 0;
//}

//求两个数的较大值
//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int r = Max(a, b);
//	printf("%d", r);
//
//	return 0;
//}

//计算y的值
int main()
{
	int x = 0;
	int y = 0;
	//输入
	scanf("%d", &x);
	//计算
	if (x > 0)
		y = -1;
	else if (x == 0)
		y = 0;
	else
		y = 1;
	//输出
	printf("%d", y);

	return 0;
}