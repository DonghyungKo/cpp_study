#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>

int main() {
	
	FILE* in, *out; // ��Ʈ��: ������ ����Ű�� ������
	 
	in = fopen("input.txt", "r");
	int n;
	if (in == NULL) { //����ó��
		std::cout << "NULL Pointer ERROR";
		return 1;
	}
	fscanf(in, "%d", &n);
	fclose(in);

	//out = fopen("ex47_output.txt", "w");
	//fprintf_s(out, "%d\n", n);

	return 0;
}