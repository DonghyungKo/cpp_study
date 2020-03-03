// this: 자기 자신(self, cls)의 메모리주소를 가르키는 포인터

#include <iostream>

class MyClass {

public:
	void printThis() {
		std::cout << "나의 주소는 " << this << std::endl;
	}
};
int main() {

	MyClass a, b;

	std::cout << "a의 주소는" << &a << std::endl;
	std::cout << "b의 주소는" << &b << std::endl;

	a.printThis();
	b.printThis();

	return 0;
}
