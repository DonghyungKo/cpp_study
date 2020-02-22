// 28강 포인터 배열

#include <iostream>

int main() {

	int arr[4] = { 1, 2, 3, 4 };

	// 포인터 배열은 포인터들의 배열
	int* ptr[4];
	
	for (int i = 0; i < 4; i++) {
		ptr[i] = &arr[i];
	}
	
	for (int i = 0; i < 4; i++) {
		std::cout << *ptr[i] << std::endl;
	}

	// 포인터 배열의 쓰임새
	// 문자열의 첫번쨰 요소 메모리 주소를 가르키는 포인터들을 배열에 담음
	char strs[3][10] = {
		"Hello",
		"World",
		"C++"
	};

	char* ptrStrs[3];
	
	for (int i = 0; i < 3; i++) {
		ptrStrs[i] = strs[i];
		std::cout << ptrStrs[i] << std::endl;
	}

}