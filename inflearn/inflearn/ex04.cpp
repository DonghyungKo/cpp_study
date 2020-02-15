#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//char: 1바이트 정수형
	//character: 문자 (반각문자만, ABCabc123&*(&#@$)
	//전각문자: 한글, 일어, 한자 등
	
	//char a = 65;
	
	//printf("%c\n", a);

	// ASCII : American Standard (문자=>숫자 대응 표준)

	char a;

	printf("문자를 입력하세요 : ");
	scanf("%c", &a);
	printf("당신이 입력한 문자 %c의 ASCII 코드는 %d입니다", a, a);


}