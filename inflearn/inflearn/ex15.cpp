// 포인터(pointer)
#include <iostream>

int main(void) {
	
	int a = 3;
	int* aPtr = &a;

	std::cout << &a << std::endl;
	std::cout << aPtr << std::endl;

	std::cout << a << std::endl;
	std::cout << *&a << std::endl;
	std::cout << *aPtr << std::endl;

	// 배열과 포인터
	int arr[10] = { 1,2,3 };

	// 배열 변수의 포인터는 배열의 첫번째 원소를 가리킴
	std::cout << (int)&arr << std::endl;
	std::cout << (int)&arr[0] << std::endl;

	// 배열의 원소 주소 뒤에 1을 더하면 자료형의 크기(Byte)만큼
	// 이동하여 다음 주소를 가리킴
	//for (int i = 0; i < 10; i++) {	
	//	int* ptr = &arr[i];
	//	std::cout << (int)ptr << std::endl;
	//}
	
	// 아래의 3개 for문은 모두 동일
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i] << std::endl;
	}

	for (int i = 0; i < 10; i++) {
		std::cout << *(arr + i) << std::endl;
	}

	for (int* ptr = arr; ptr < arr + 10; ptr++) {
		std::cout << *ptr << std::endl;
	}

	/*
		1. ptr == &ptr[0]
		2. *ptr == ptr[0]
		3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값
	*/
	return 0;
}