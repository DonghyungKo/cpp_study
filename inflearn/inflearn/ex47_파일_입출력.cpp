#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>

int main() {
	
	FILE* in; // ��Ʈ��: ������ ����Ű�� ������
	in = fopen("ex47_����_�����.cpp", "r");
	
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