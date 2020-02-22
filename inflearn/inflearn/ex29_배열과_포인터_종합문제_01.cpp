#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main(void) {
	/*
	100개 이하의 정수를 입력받아
	첫 줄에 짝수 번째 숫자들을 순서대로 출력하고,
	다음 줄에 홀수 번째 숫자들을 순서대로 출력하는 프로그램을 만들어 보세요.
	*/

	int arr[100];
	int length = 0;

	// 사용자에게 숫자를 입력받음
	for (int i = 0; i < 100; i++) {
		std::cout << "숫자를 입력하세요. 그만하시려면 0을 입력하세요 : ";
		scanf("%d", &arr[i]);
		
		if (arr[i] == 0) {
			arr[i] = NULL;
			break;
		}
		
		++length;
		std::cout << "\n";
	}
	
	// 짝수 번째 숫자들을 순서대로 출력
	for (int i = 0; i < length; i += 2) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	// 홀수 번째 숫자들을 순서대로 출력
	for (int i = 1; i < length; i += 2) {
		std::cout << arr[i] << " ";
	}

	return 0;
}