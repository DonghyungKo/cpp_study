#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main(void) {
	/*
	100�� ������ ������ �Է¹޾�
	ù �ٿ� ¦�� ��° ���ڵ��� ������� ����ϰ�,
	���� �ٿ� Ȧ�� ��° ���ڵ��� ������� ����ϴ� ���α׷��� ����� ������.
	*/

	int arr[100];
	int length = 0;

	// ����ڿ��� ���ڸ� �Է¹���
	for (int i = 0; i < 100; i++) {
		std::cout << "���ڸ� �Է��ϼ���. �׸��Ͻ÷��� 0�� �Է��ϼ��� : ";
		scanf("%d", &arr[i]);
		
		if (arr[i] == 0) {
			arr[i] = NULL;
			break;
		}
		
		++length;
		std::cout << "\n";
	}
	
	// ¦�� ��° ���ڵ��� ������� ���
	for (int i = 0; i < length; i += 2) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	// Ȧ�� ��° ���ڵ��� ������� ���
	for (int i = 1; i < length; i += 2) {
		std::cout << arr[i] << " ";
	}

	return 0;
}