#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	////ASCII码编程作业-------------------------------------------------------
	//int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	////定义静态数组arr
	//int i = 0;//定义数组元素下标变量i
	//int sz = sizeof(arr) / sizeof(arr[0]);
	////计算数组元素个数
	//// sizeof(arr)数组占用总内存字节大小
	////sizeof(arr[0])数组单个元素占用内存字节大小-》sizeof(int)
	//while (i < sz)//循环遍历整个数组arr
	//{
	//	printf("%c", arr[i]);
	//	i++;


	//}


	//出生日期输入输出编程作业---------------------------------------------
	//int year = 0;
	//int month = 0;
	//int date = 0;
	////输入
	//scanf("%4d%2d%2d", &year, &month, &date);//%m->%4d%2d%2d指定输入域宽
	////输出
	//printf("year=%d\n", year);
	//printf("month=%02d\n", month);//%0自动补全01，02...指定域宽输出
	//printf("date=%02d\n", date);



	//学生信息输入输出-----------------------------------------------------
	/*int id = 0;
	float c = 0.0f;
	float math = 0.0f;
	float eng = 0.0f;
	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);*/




	//printf的返回值-------------------------------------------------------
	int n = printf("Hello world!");
	printf("\n%d\n", n);





	return 0;
}