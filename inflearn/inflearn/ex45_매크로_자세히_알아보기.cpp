#include <stdio.h>
#include <iostream>

// ��ũ�η� ����� ����� ������ �ܰ迡�� ġȯ��
#define PI 3.141592
#define PRINT_HELLO printf("Hello");
#define SQUARE(X) ((X) * (X))

// ���� ������
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
