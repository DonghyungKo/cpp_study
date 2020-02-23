#include <stdio.h>
#include <iostream>

typedef const char* String;
typedef int Int32;
struct Person { 
	Int32 age; // 4
	String name; 
	Int32 wage;
	

};

int main() {
	Person p;
	// 구조체 초기화
	p = {25, "K" , 5000000};

	// 구조체를 읽을 때에는 
	// CPU 레지스터의 읽기 블록 크기에 맞춰
	// 컴파일러에서 Byte padding(4바이트 씩)을 한다.
	// 그 결과, 멤버 변수들 사이에 메모리 공간을 확보된다.

	// 참고로 CPU 레지스터는
	// 32bit 운영체제에서 4바이트씩,
	// 64bit 운영체제에서 8바이트씩 읽는다

	std::cout << "Size of Name: " << sizeof(p.name) << std::endl;
	std::cout << "Size of age: " << sizeof(p.age) << std::endl;
	std::cout << "Size of wage: " << sizeof(p.wage) << std::endl;
	std::cout << "Size of Struct : " << sizeof(p) << std::endl;
	// 위 코드는 직관적으로 4+2+4=10 을 반환할 것 같지만,
	// 실제로는 
	// 8(p.age + 4바이트 패딩) 
	// + 8(p.name + 6바이트 패딩)
	// + 8(p.wage + 4바이트 패딩)
	// = 24를 반환한다.

	return 0;
}