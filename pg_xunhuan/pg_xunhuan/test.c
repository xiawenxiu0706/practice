#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int line=0;
	printf("�������\n");
	while (line < 20000)
	{
		printf("д����%d\n", line);
		line++;
	}
	if (line >= 20000)
	{
		printf("��offer\n");
	}
	else
   { 
		printf("��������\n");
	}
	return 0;
}