#include <stdio.h>
#include <iostream>

// ����ü
// ���� ������ �ϳ��� �̸����� ������
// ����ü�� �����ϴ� ���������� �����Ϸ����� ������ �����ϰ� 
// �޸𸮻� ������ �Ҵ����� ����

typedef const char* String;
typedef int Int32;
struct Person { String name; Int32 age; }; 
// ���� ���� typedef struct {String name; Int32 age;} Person;

int main() {
	Person p;
	// ����ü �ʱ�ȭ
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