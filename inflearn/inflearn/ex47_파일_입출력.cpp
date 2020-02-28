#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>

int main() {
	
	FILE* in; // 스트림: 파일을 가르키는 포인터
	in = fopen("ex47_파일_입출력.cpp", "r");
	
	if (in == NULL) { //nullptr error handling
		std::cout << "NULL Pointer ERROR";
		return 1;
	}

	char ch;
	while (fscanf(in, "%c", &ch) != EOF) { 
		std::cout << ch ;
	}
	
	return 0;
}