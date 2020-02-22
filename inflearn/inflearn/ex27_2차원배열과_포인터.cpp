#include <iostream>

int main(void) {

	// 27강 2차원 배열과 배열 포인터
	/*
		1. arr = &arr[0]
		2. *arr == arr[0]
		3. ptr + i == ptr + i*sizeof(*ptr)
		4. arr + i == arr + i*sizeof(*(&arr[0]))
	*/
	int arr[2][3] = { 
		{1,2,3}, 
		{4,5,6} 
	};

	std::cout << (int)arr << std::endl;
	std::cout << (int)(arr+1) << std::endl;

	std::cout << sizeof(arr) << std::endl;
	std::cout << sizeof(arr[0]) << std::endl;
	std::cout << sizeof(arr[0][0]) << std::endl;
	
	std::cout << (int)(&arr) << std::endl;
	std::cout << (int)(&arr[0]) << std::endl;
	std::cout << (int)(&arr[0]) << std::endl;

	// 배열 포인터
	
	int(*ptr)[3] = arr;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << ptr[i][j] << " ";
		}
		std::cout << "\n";
	}

	// 1. ptr[i] == arr[i]
	//	=> ptr[i] == *(ptr + i*sizeof(*ptr)) == arr[i]
	// 2. ptr[i][j] == arr[i][j]
	// 3. ptr == arr

	for (int(*row)[3] = arr; row < arr + 2; row++) {
		for (int *col = *row; col < *row + 3; col++) {
			std::cout << *col << " ";
		}
		std::cout << '\n';
	}
	return 0;
}