#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	/*
	두 숫자를 입력받아서 그 숫자들이 합을 출력하는 프로그램을 만들어 보세요.

	double a, b;

	printf("첫 번째 숫자를 입력하세요 : ");
	scanf("%lf", &a);
	printf("두 번째 숫자를 입력하세요 : ");
	scanf("%lf", &b);

	double hap = a + b;

	printf("두 숫자의 합은 %lf입니다.", hap);
	*/

	/*
	알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 만들어보세요. Z 제외
	*/

	char alphabet;
	printf("알파벳을 입력하세요. (z제외) : ");
	scanf("%c", &alphabet);
	printf("입력하신 알파벳의 다음 알파벳은 %c입니다.", alphabet+1);
}

