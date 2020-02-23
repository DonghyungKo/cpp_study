#include <stdio.h>
#include <iostream>

// 함수의 매개변수는 기본적으로 call-by-value
// 따라서, 변수의 값을 복사해서 새로운 메모리 공간을 부여
void callByValue(int x, int y) {
	std::cout << "x :" << (int)x << std::endl; 
	std::cout << "y :" << (int)y << std::endl;

	std::cout << "&x :" << (int)&x << std::endl;
	std::cout << "&y :" << (int)&y << std::endl;

}
// 함수의 매개변수로 포인터를 주면, call-by-reference
// 함수에서 매개변수를 수정하면, 함수 밖에서도 값이 바뀜
void callByReference(int* x, int* y) {
	std::cout << "x :" << (int)x << std::endl;
	std::cout << "y :" << (int)y << std::endl;

	std::cout << "&x :" << (int)&x << std::endl;
	std::cout << "&y :" << (int)&y << std::endl;

}

int main() {
	int a = 2;
	int b = 3;

	std::cout << "a : " << (int)&a << std::endl;
	std::cout << "b : " << (int)&b << std::endl;

	std::cout << "call-by-value" << std::endl;
	callByValue(a, b);
	
	std::cout << "call-by-reference" << std::endl;
	callByReference(&a, &b);

	return 0;
}
