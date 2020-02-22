#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	//char arr[] = "abc";

	//sizeof(arr); //4
	// {a, b, c, \0}

	// strlen : 길이 반환
	char str[100] = "Hello";
	int len = strlen(str);
	printf("문자열의 길이는 %d\n", len);

	// strcpy : 복사
	char str1[] = "Hello";
	char str2[100];

	strcpy_s(str2, str1);
	printf("%s\n", str2);

	// strcat : string + concat
	char str11[] = "Hello";
	strcat(str11, " World!");
	printf("%s\n", str11);
}
