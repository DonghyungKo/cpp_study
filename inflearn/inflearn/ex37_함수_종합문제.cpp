#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int func1(int x) {
	/*
	�ڿ��� �ϳ��� �Ű������� �޾Ƽ�
	�� ���� ¦���� 0, Ȧ���� 1�� ��ȯ
	0�̰ų� ��(-)�� �̸� -1�� ��ȯ
	*/

	if (x < 1) {
		return -1;
	}

	if (x % 2 == 0) {
		return 0;
	}

	return 1;
}

void func2(const char str[]) {
	/* ���ڿ��� �Ű������� �޾� �� ���ڿ����� 
	������ �����Ͽ� ����ϴ� �Լ��� �ۼ��غ�����.
	*/
	for (int i = 0; str[i] != "\0"; i++) {
		std::cout << str[i];

	}
}

int main() {

	// 1�� ����
	std::cout << func1(-1) << std::endl;
	std::cout << func1(1) << std::endl;
	std::cout << func1(2) << std::endl;
	
	// 2�� ����
	const char *str = "Hello World!";
	//std::cout << str << std::endl;
	
	func2(str);
	
	return 0;
}