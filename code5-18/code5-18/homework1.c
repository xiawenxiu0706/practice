#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����������
int main()
{
	int a = 0;
	int b = 0;
	//����
	scanf("%d %d", &a, &b);
	//?Ϊʲô��&a��&b
	//Ҳ����˵scanf("%d %d", &a, &b);����У�
	// %d %d�û��������ֵ��ֱ�Ӵ��� &a, &bȡ���Ĺ̶���ַ�У�
	// Ҳ����ͨ���˷����ı�ԭ����ַ�г�ʼ����ֵ

	//����
	int m = a / b;
	int n = a % b;
	//���
	printf("%d %d\n", m, n);

	return 0;
}