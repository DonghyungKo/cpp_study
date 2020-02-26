#include <stdio.h>
#include <iostream>

// 매크로로 선언된 상수는 컴파일 단계에서 치환됨
#define PI 3.141592
#define PRINT_HELLO printf("Hello");
#define SQUARE(X) ((X) * (X))

// 삼항 연산자
int max(int a, int b) {
	
	return (a > b) ? a : b;
}
int main() {
	
	//PRINT_HELLO;

	int a = 5;
	std::cout << 100 / SQUARE(a) << std::endl;
	std::cout << SQUARE(a-1) << std::endl;

	return 0;
}
