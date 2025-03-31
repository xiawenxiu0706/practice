#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	float a = 7 / 2.0;
//	printf("%.1f", a);
//
//	return 0;
//}

//int main()
//{
//	int flag = 2;//为真
//
//	//int flag = 0;flag为假
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


int main()
{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));//一个元素四个字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//元素个数

	//int a = 10;
	//int b = a++;//先使用，后++。1.b=a 2.a=a+1后自增
	//int a = 10;
	//int b = ++a;


	//printf("%d\n", b);//11
	//printf("%d\n", a);//11

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 3;
	arr[n] = 20;
	printf("%d\n", arr[n]);

	return 0;
}

