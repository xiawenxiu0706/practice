#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef unsigned int uint;
typedef struct Node
{
	int data;
	struct Node* next;
}Node;

//int main()
//{
//	unsigned int num1 = 1;
//	uint num2 = 2;
//	Node n3;
//
//
//
//	return 0;
//}
//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//void test()
// void意思是不需要任何返回
//{
//	static int a = 1;
//	//static使局部变量a出了作用域后不销毁，仍保留上次执行后得到的值，输出结果为234567891011
//	//本质上，static修饰局部变量时，改变了变量的存储位置（栈区（局部变量）--堆区--静态区（静态变量）
//	// 影响了变量的生命周期，生命周期变长，和程序的生命周期一样，放在静态区后，变量位置不变
//	//局部变量
//	a++;
//	//没有使用a，直接++
//	//int b=a++;先使用，先把a的值使用赋给b，后++
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//		//循环十次
//	{
//		test();
//		i++;
//
//	}
//
//	return 0;
//}
//修饰局部变量

int main()
{


	return 0;
}