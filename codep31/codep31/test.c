#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	////ASCII������ҵ-------------------------------------------------------
	//int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	////���徲̬����arr
	//int i = 0;//��������Ԫ���±����i
	//int sz = sizeof(arr) / sizeof(arr[0]);
	////��������Ԫ�ظ���
	//// sizeof(arr)����ռ�����ڴ��ֽڴ�С
	////sizeof(arr[0])���鵥��Ԫ��ռ���ڴ��ֽڴ�С-��sizeof(int)
	//while (i < sz)//ѭ��������������arr
	//{
	//	printf("%c", arr[i]);
	//	i++;


	//}


	//��������������������ҵ---------------------------------------------
	//int year = 0;
	//int month = 0;
	//int date = 0;
	////����
	//scanf("%4d%2d%2d", &year, &month, &date);//%m->%4d%2d%2dָ���������
	////���
	//printf("year=%d\n", year);
	//printf("month=%02d\n", month);//%0�Զ���ȫ01��02...ָ��������
	//printf("date=%02d\n", date);



	//ѧ����Ϣ�������-----------------------------------------------------
	/*int id = 0;
	float c = 0.0f;
	float math = 0.0f;
	float eng = 0.0f;
	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);*/




	//printf�ķ���ֵ-------------------------------------------------------
	int n = printf("Hello world!");
	printf("\n%d\n", n);





	return 0;
}