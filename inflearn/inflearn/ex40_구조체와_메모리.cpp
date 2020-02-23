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
	// ����ü �ʱ�ȭ
	p = {25, "K" , 5000000};

	// ����ü�� ���� ������ 
	// CPU ���������� �б� ��� ũ�⿡ ����
	// �����Ϸ����� Byte padding(4����Ʈ ��)�� �Ѵ�.
	// �� ���, ��� ������ ���̿� �޸� ������ Ȯ���ȴ�.

	// ����� CPU �������ʹ�
	// 32bit �ü������ 4����Ʈ��,
	// 64bit �ü������ 8����Ʈ�� �д´�

	std::cout << "Size of Name: " << sizeof(p.name) << std::endl;
	std::cout << "Size of age: " << sizeof(p.age) << std::endl;
	std::cout << "Size of wage: " << sizeof(p.wage) << std::endl;
	std::cout << "Size of Struct : " << sizeof(p) << std::endl;
	// �� �ڵ�� ���������� 4+2+4=10 �� ��ȯ�� �� ������,
	// �����δ� 
	// 8(p.age + 4����Ʈ �е�) 
	// + 8(p.name + 6����Ʈ �е�)
	// + 8(p.wage + 4����Ʈ �е�)
	// = 24�� ��ȯ�Ѵ�.

	return 0;
}