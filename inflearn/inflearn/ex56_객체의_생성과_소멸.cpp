// 생성자: 객체가 생성될 때 자동으로 호출되는 함수
// 소멸지: 객체가 소멸될 때 자동으로 호출되는 함수

#include <iostream>

/*
class MyClass {

public:
	MyClass() { // 생성자
		std::cout << "생성자가 호출되었습니다." << std::endl;
	}

	~MyClass() { // 소멸자
		std::cout << "소멸자가 호출되었습니다." << std::endl;
	}
};
//MyClass globalObj;

void testLocalObj() {
	std::cout << "testLocalObj함수 시작." << std::endl;
	MyClass localObj;
	std::cout << "testLocalObj함수 끝." << std::endl;
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

	std::cout << "c1의 real: " << c1.getReal() << std::endl;
	std::cout << "c1의 imag: " << c1.getImag() << std::endl;
	std::cout << "c2의 real: " << c2.getReal() << std::endl;
	std::cout << "c2의 imag: " << c2.getImag() << std::endl;

	return 0;
}