#include <stdio.h>
#include <iostream>

// 구조체
// 여러 변수를 하나의 이름으로 묶어줌
// 구조체를 선언하는 시점에서는 컴파일러에게 정보만 전달하고 
// 메모리상에 공간을 할당하지 않음

typedef const char* String;
typedef int Int32;
struct Person { String name; Int32 age; }; 
// 위와 동일 typedef struct {String name; Int32 age;} Person;

int main() {
	Person p;
	// 구조체 초기화
	//p.name = "KoKoMong";
	//p.age = 25;
	p = {"KoKoMong" , 25};
	
	std::cout << "Name : " << p.name << std::endl;
	std::cout << "Age : " << p.age << std::endl;

	std::cout << "Struct adress: " << (int)&p << std::endl;
	std::cout << "Name adress: " << (int)&p.name << std::endl;
	std::cout << "Age adress: " << (int)&p.age << std::endl;
	
	return 0;
}