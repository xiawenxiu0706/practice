//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////学生
//struct stu//创建一个结构体（类型）
//{
//	//成员
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
//	//（*ps).name == s.name 结构体变量.成员名 解引用
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//	//结构体指针变量指向->成员名 ps->name
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
//	////8byte 指针变量本质是存放地址的
//	////存放地址所需要的字节大小，取决于电脑是几bit地址线
//	////32bit地址线，可存放4byte指针变量
//	////64bit地址线，可存放8byte指针变量
//	////x86--32位平台下地址是32位
//	////x64--64位平台下地址是64位
//	//int *p1, * p2, * p3;//都是指针型变量
//
//	struct stu s = { "xiawenxiu",21,"nv","15634103770" };
//	//创建结构体类型变量（对象）s及初始化
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	//结构体对象.成员名  一一对应
//	print(&s);//不想在主函数中打印，取地址在print函数中打印
//
//	return 0;
//}