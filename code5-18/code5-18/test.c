//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////ѧ��
//struct stu//����һ���ṹ�壨���ͣ�
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//
//};
//
//void print(struct stu *ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age,(*ps).sex, (*ps).tele);
//	//��*ps).name == s.name �ṹ�����.��Ա�� ������
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//	//�ṹ��ָ�����ָ��->��Ա�� ps->name
//
//
//}
//
//
//int main()
//{
//	//printf("%zu\n", sizeof(int*));
//	//printf("%zu\n", sizeof(char*));
//	//printf("%zu\n", sizeof(float*));
//	////8byte ָ����������Ǵ�ŵ�ַ��
//	////��ŵ�ַ����Ҫ���ֽڴ�С��ȡ���ڵ����Ǽ�bit��ַ��
//	////32bit��ַ�ߣ��ɴ��4byteָ�����
//	////64bit��ַ�ߣ��ɴ��8byteָ�����
//	////x86--32λƽ̨�µ�ַ��32λ
//	////x64--64λƽ̨�µ�ַ��64λ
//	//int *p1, * p2, * p3;//����ָ���ͱ���
//
//	struct stu s = { "xiawenxiu",21,"nv","15634103770" };
//	//�����ṹ�����ͱ���������s����ʼ��
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	//�ṹ�����.��Ա��  һһ��Ӧ
//	print(&s);//�������������д�ӡ��ȡ��ַ��print�����д�ӡ
//
//	return 0;
//}