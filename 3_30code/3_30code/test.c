#define _CRT_SECURE_NO_WARNINGS
//BC32 ���ѧ����Ϣ ѧ����Ϣ����ϵͳ
//#include<stdio.h>
//int main()
//{
//	printf("name    age    gender\n");
//	printf("---------------------\n"); 
//	printf("jack    18     man\n");
//	return 0;
//}

//BC31 ������Ϣ
//#include<stdio.h>

//int main()
//{
//	printf("I lost my cellphone!\n");
//
//	return 0;
//}


//BC17 ������ʽ��ֵ
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
//	//����ȫ��ʼ��
//	printf("%d\n", strlen(arr));
//
//	return 0;
//}

//���������Ľϴ�ֵ
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

//����y��ֵ
int main()
{
	int x = 0;
	int y = 0;
	//����
	scanf("%d", &x);
	//����
	if (x > 0)
		y = -1;
	else if (x == 0)
		y = 0;
	else
		y = 1;
	//���
	printf("%d", y);

	return 0;
}