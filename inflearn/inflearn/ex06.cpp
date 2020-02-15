/*
	산술연산자: 수학적인 연산
	+ - * / % =
	+= -= *= /= %=
	++ --
*/

#include <stdio.h>

int main() {
	int a = 5;
	printf("a는 원래 %d였다...\n", a);
	
	a += 3; // =: 대입 연산
	printf("a에 3을 더했더니 %d이(가) 되었다.\n", a);

	
	printf("\n\n==== 전치 증가 연산 === \n");
	int b = 10;
	int c;

	c = ++b;
	printf("b는 %d, c는 %d\n", b, c);

	printf("\n\n==== 후치 증가 연산 === \n");
	int d = 10;
	int e;

	e = d++;
	printf("d는 %d, e는 %d\n", d, e);

}