#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	/*
	�� ���ڸ� �Է¹޾Ƽ� �� ���ڵ��� ���� ����ϴ� ���α׷��� ����� ������.

	double a, b;

	printf("ù ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%lf", &a);
	printf("�� ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%lf", &b);

	double hap = a + b;

	printf("�� ������ ���� %lf�Դϴ�.", hap);
	*/

	/*
	���ĺ��� �Է¹޾Ƽ� �� ���� ���ĺ��� ����ϴ� ���α׷��� ��������. Z ����
	*/

	char alphabet;
	printf("���ĺ��� �Է��ϼ���. (z����) : ");
	scanf("%c", &alphabet);
	printf("�Է��Ͻ� ���ĺ��� ���� ���ĺ��� %c�Դϴ�.", alphabet+1);
}

