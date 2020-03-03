// ������: ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ�
// �Ҹ���: ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�

#include <iostream>

/*
class MyClass {

public:
	MyClass() { // ������
		std::cout << "�����ڰ� ȣ��Ǿ����ϴ�." << std::endl;
	}

	~MyClass() { // �Ҹ���
		std::cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�." << std::endl;
	}
};
//MyClass globalObj;

void testLocalObj() {
	std::cout << "testLocalObj�Լ� ����." << std::endl;
	MyClass localObj;
	std::cout << "testLocalObj�Լ� ��." << std::endl;
}
*/

class Complex {

private:
	double _real;
	double _imag;

public:
	Complex() {
		_real = 0;
		_imag = 0;
	}

	Complex(double real, double imag) {
		_real = real;
		_imag = imag;
	}

	double getReal() {
		return _real;
	}
	double setReal(double real) {
		_real = real;
	}
	
	double getImag() {
		return _imag;
	}
	double setImag(double imag) {
		_imag = imag;
	}

};
int main() {

	Complex c1;
	Complex c2(1.0, 1.0);

	std::cout << "c1�� real: " << c1.getReal() << std::endl;
	std::cout << "c1�� imag: " << c1.getImag() << std::endl;
	std::cout << "c2�� real: " << c2.getReal() << std::endl;
	std::cout << "c2�� imag: " << c2.getImag() << std::endl;

	return 0;
}