#include <stdio.h>
#include <iostream>

// �Լ����� �Ű����� �迭�� call-by-reference
// call-by-reference : ������ ����

void printArrAdress(int *arr) {
	std::cout << "adress of arr" << (int)arr << std::endl;
}

void multiplyArr(int *arr) {
	for (int i = 0; i < 4; i++) {
		arr[i] *= 2;
	}
}

void printArr(int (*arr)[3]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}
int main() {
	int arr[4] = { 1, 2, 3,4 };
	
	std::cout << "adress of arr" << (int)arr << std::endl;
	printArrAdress(arr);

	multiplyArr(arr);
	// ����غ���
	for (int i = 0; i < 4; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	int arr2[2][3] = {
		{1, 2, 3}, 
		{4, 5, 6}
	};

	printArr(arr2);

}