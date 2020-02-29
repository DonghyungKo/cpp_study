/*
	1. ptr == &ptr[0]
	2. *ptr == *&ptr[0]== ptr[0]
	3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값
*/

#include <iostream>

int main(void) {

	int arr[3] = { 1,2,3 };

	std::cout << "arr = " << (int)arr << std::endl; 
	std::cout << "arr +1 = " << (int)(arr +1) << std::endl; // +4

	std::cout << "&arr = " << (int)&arr << std::endl; 
	std::cout << "&arr +1 = " << (int)(&arr +1) << std::endl; // +12

	// 배열 포인터
	int(*ptr_arr)[3]; // 길이 3인 int형 배열을 가르키는 포인터 선언
	ptr_arr = &arr;

	for (int i = 0; i < 3; i++) {
		std::cout << (*ptr_arr)[i] << std::endl;
	}

	return 0;
}