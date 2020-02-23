#include <iostream>
#include <stdio.h>


int main() {

	//int arr[3][3] = { 0 };
	/*
		0 0 0
		0 0 0
		0 0 0 
	*/

	// arr는 배열의 첫번째 원소의 메모리 주스를 가르킴
	//std::cout << arr << std::endl; // &arr[0] #배열의 첫번째 행을 가르키는 포인터
	//std::cout << &arr << std::endl; // 전체 2차원 배열을 가르키는 포인터
	//std::cout << *arr << std::endl; // *(&arr[0]) == arr[0]

	//std::cout << arr[0] << std::endl; // &(arr[0])[0] 첫 번째 원소를 가르키는 포인터
	//std::cout << &arr[0] << std::endl; //  첫번째 배열을 가르키는 포인터
	//std::cout << *arr[0] << std::endl; // *(&(arr[0])[0]) == arr[0][0], 첫 번째 원소 출력 (0)
	
	//std::cout << &arr[0][0] << std::endl; // &(arr[0][0])[0]
	//std::cout << arr[0][0] << std::endl; // 첫 번째 원소 출력, 0
	
	// 
	//std::cout << (int)&arr[0][0] << std::endl; // + 0
	//std::cout << (int)(arr[0] + 1) << std::endl; // arr[0] = &(arr[0])[0] ==> + 4
	//std::cout << (int)(&arr[0] + 1) << std::endl; // &arr[0] + 1 ==> + 12
	//std::cout << (int)(arr + 1) << std::endl; // &arr[0] +1 ==> + 12
	//std::cout << (int)(&arr + 1) << std::endl; // ==> + 36

	int arr[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
	};

	int (*ptr)[4] = arr; // 배열 포인터 선언

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << ptr[i][j] << " ";
		}
		std::cout << "\n";
	}
	return 0;
}