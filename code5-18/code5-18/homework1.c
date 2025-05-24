#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算带余除法
int main()
{
	int a = 0;
	int b = 0;
	//输入
	scanf("%d %d", &a, &b);
	//?为什么是&a，&b
	//也就是说scanf("%d %d", &a, &b);语句中，
	// %d %d用户输入的数值，直接传入 &a, &b取到的固定地址中，
	// 也可以通过此方法改变原本地址中初始化的值

	//计算
	int m = a / b;
	int n = a % b;
	//输出
	printf("%d %d\n", m, n);

	return 0;
}