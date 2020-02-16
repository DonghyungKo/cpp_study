#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i=1;
	
	while (i <= 10) {
		printf("%d\n", i);
		i++;
	}
	printf("반복문 종료\n");
		
	// do-while: 조건을 만족하지 않아도 한번은 무조건 실행

	do {
		printf("%d\n", i);
		i++;
	} while (i <= 10);
	
	// while 문의 특수한 형태
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
	}

}