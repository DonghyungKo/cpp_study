// overload
// 동일한 함수 명을 갖는 함수를 여러 개 정의할 수 있다.
// 컴파일러가 매개변수의 자료형을 인식해서 가장 적합한 함수를 찾아줌!
#include <iostream>


void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

void swap(int* (&a), int* (&b)) { 
	int* tmp = a; // a는 int형 포인터를 가르키는 reference 변수
	a = b;
	b = tmp;

}

int main() {
	
	int a = 20, b = 30;
	double da = 2.2222, db = 3.333;

	int* pa = &a;
	int* pb = &b;

	swap(a, b);
	swap(da, db);
	swap(pa, pb);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	
	std::cout << "da : " << da << std::endl;
	std::cout << "db : " << db << std::endl;
	
	std::cout << "*pa : " << *pa << std::endl;
	std::cout << "*pb : " << *pb << std::endl;

	return 0;
}


