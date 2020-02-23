#include <stdio.h>
#include <iostream>

// �Լ��� �Ű������� �⺻������ call-by-value
// ����, ������ ���� �����ؼ� ���ο� �޸� ������ �ο�
void callByValue(int x, int y) {
	std::cout << "x :" << (int)x << std::endl; 
	std::cout << "y :" << (int)y << std::endl;

	std::cout << "&x :" << (int)&x << std::endl;
	std::cout << "&y :" << (int)&y << std::endl;

}
// �Լ��� �Ű������� �����͸� �ָ�, call-by-reference
// �Լ����� �Ű������� �����ϸ�, �Լ� �ۿ����� ���� �ٲ�
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
