#include <iostream>
#include <stdio.h>


int main() {

	//int arr[3][3] = { 0 };
	/*
		0 0 0
		0 0 0
		0 0 0 
	*/

	// arr�� �迭�� ù��° ������ �޸� �ֽ��� ����Ŵ
	//std::cout << arr << std::endl; // &arr[0] #�迭�� ù��° ���� ����Ű�� ������
	//std::cout << &arr << std::endl; // ��ü 2���� �迭�� ����Ű�� ������
	//std::cout << *arr << std::endl; // *(&arr[0]) == arr[0]

	//std::cout << arr[0] << std::endl; // &(arr[0])[0] ù ��° ���Ҹ� ����Ű�� ������
	//std::cout << &arr[0] << std::endl; //  ù��° �迭�� ����Ű�� ������
	//std::cout << *arr[0] << std::endl; // *(&(arr[0])[0]) == arr[0][0], ù ��° ���� ��� (0)
	
	//std::cout << &arr[0][0] << std::endl; // &(arr[0][0])[0]
	//std::cout << arr[0][0] << std::endl; // ù ��° ���� ���, 0
	
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

	int (*ptr)[4] = arr; // �迭 ������ ����

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << ptr[i][j] << " ";
		}
		std::cout << "\n";
	}
	return 0;
}