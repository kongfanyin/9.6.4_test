#define _CRT_SECURE_NO_WARNINGS 1
//声明两个sales对象，使用setsales()的交互式版本为一个结构提供交互值，然后使用setsales的非交互式版本为另一个结构提供值
//另外还使用showsales()来显示两个结构的内容
#include<string>
#include<iostream>
#include"name.h"

int main(char argc, char** argv)
{
	using namespace SALES;

	Sales s1, s2;

	// set data
	Setsales(s1);
	// interactive
	double ar[3] = { 3.0, 4.0, 1.0 };
	Setsales(s2, ar, 3);

	// show struct
	Showsales(s1);
	Showsales(s2);

	return 0;
}