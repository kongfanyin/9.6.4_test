#define _CRT_SECURE_NO_WARNINGS 1
//��������sales����ʹ��setsales()�Ľ���ʽ�汾Ϊһ���ṹ�ṩ����ֵ��Ȼ��ʹ��setsales�ķǽ���ʽ�汾Ϊ��һ���ṹ�ṩֵ
//���⻹ʹ��showsales()����ʾ�����ṹ������
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