#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>

int main() {
	
	FILE* in, *out; // 스트림: 파일을 가르키는 포인터
	 
	in = fopen("input.txt", "r");
	int n;
	if (in == NULL) { //예외처리
		std::cout << "NULL Pointer ERROR";
		return 1;
	}
	fscanf(in, "%d", &n);
	fclose(in);

	//out = fopen("ex47_output.txt", "w");
	//fprintf_s(out, "%d\n", n);

	return 0;
}