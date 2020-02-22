#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main(void) {
	/*
	10*10 이하의 정수형 이차원 배열을 입력받아
	그 배열의 각 행의 요소의 합을 출력하는 프로그램을 만들어보세요.

	입력 예
	3 4
	4 2 6 3
	7 9 3 4
	5 1 2 1

	출력 예
	15
	23
	9
	*/

	// 배열의 크기를 입력 받음
	int sizeX, sizeY;
	
	std::cout << "배열의 크기를 입력하세요 ex) 3 4 : ";
	std::cin >> sizeX >> sizeY;

	// 동적 배열 할당 (이중 포인터 활용)
	auto mat = new int* [sizeX];
	for (int i = 0; i < sizeX; i++) {
		mat[i] = new int[sizeY];
	}
	
	// 배열의 원소를 입력 받음
	for (int i = 0; i < sizeX; i++) {
		for (int j = 0; j < sizeY; j++) {
			std::cout << "(" << i << "," << j << ") 번째 원소를 입력하세요: ";
			std::cin >> mat[i][j];
			std::cout << "\n";
		}
	}

	// 출력
	for (int i = 0; i < sizeX; i++) {
		for (int j = 0; j < sizeY; j++) {
			std::cout << mat[i][j] << " ";
		}
		std::cout << "\n";
	}
	return 0;
}
	