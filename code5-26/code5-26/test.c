#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	////�ж�һ�����Ƿ�Ϊ����
	//int num = 0;
	//scanf("%d", &num);
	//if (1 == num % 2)//���ʽ�����ܸ�ֵ
	//	printf("����\n");
	//else
	//	printf("no\n");


	//���1-100֮�������
	int i = 1;
	
	while (i <= 100)//ѭ��100��
	{
		if (i % 2 == 1)
		{
			printf("%d\n", i);
		}
		i++;

	}


	return 0;
}