#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int func1(int x) {
	/*
	자연수 하나를 매개변수로 받아서
	그 수가 짝수면 0, 홀수면 1을 반환
	0이거나 음(-)수 이면 -1을 반환
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
	/* 문자열을 매개변수로 받아 그 문자열에서 
	공백을 제외하여 출력하는 함수를 작성해보세요.
	*/
	for (int i = 0; str[i] != "\0"; i++) {
		std::cout << str[i];

	}
}

int main() {

	// 1번 문제
	std::cout << func1(-1) << std::endl;
	std::cout << func1(1) << std::endl;
	std::cout << func1(2) << std::endl;
	
	// 2번 문제
	const char *str = "Hello World!";
	//std::cout << str << std::endl;
	
	func2(str);
	
	return 0;
}