// this: �ڱ� �ڽ�(self, cls)�� �޸��ּҸ� ����Ű�� ������

#include <iostream>

class MyClass {

public:
	void printThis() {
		std::cout << "���� �ּҴ� " << this << std::endl;
	}
};
int main() {

	MyClass a, b;

	std::cout << "a�� �ּҴ�" << &a << std::endl;
	std::cout << "b�� �ּҴ�" << &b << std::endl;

	a.printThis();
	b.printThis();

	return 0;
}
