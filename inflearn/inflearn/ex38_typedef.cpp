// typedef : type + define
#include <iostream>
#include <stdio.h>

int main() {
	typedef int Int32;
	Int32 n = 20; 
	
	std::cout << n << std::endl;
	std::cout << sizeof(n) << std::endl;
	
	typedef int Pair[2]; 
	Pair point = { 3, 4 }; // int point[2]
	
	std::cout << "(" << point[0] << ", " << point[1] << ")" << std::endl;
	
	// c++���� ���ڿ� ���ͷ��� const char�� �迭�̴�.
	typedef const char* String;
	String name = "KoKoMong"; //const char *name 
	std::cout << "name : " << name << std::endl;
	return 0;
}