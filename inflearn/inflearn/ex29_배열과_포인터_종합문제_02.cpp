#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main(void) {
	/*
	10*10 ������ ������ ������ �迭�� �Է¹޾�
	�� �迭�� �� ���� ����� ���� ����ϴ� ���α׷��� ��������.

	�Է� ��
	3 4
	4 2 6 3
	7 9 3 4
	5 1 2 1

	��� ��
	15
	23
	9
	*/

	// �迭�� ũ�⸦ �Է� ����
	int sizeX, sizeY;
	
	std::cout << "�迭�� ũ�⸦ �Է��ϼ��� ex) 3 4 : ";
	std::cin >> sizeX >> sizeY;

	// ���� �迭 �Ҵ� (���� ������ Ȱ��)
	auto mat = new int* [sizeX];
	for (int i = 0; i < sizeX; i++) {
		mat[i] = new int[sizeY];
	}
	
	// �迭�� ���Ҹ� �Է� ����
	for (int i = 0; i < sizeX; i++) {
		for (int j = 0; j < sizeY; j++) {
			std::cout << "(" << i << "," << j << ") ��° ���Ҹ� �Է��ϼ���: ";
			std::cin >> mat[i][j];
			std::cout << "\n";
		}
	}

	// ���
	for (int i = 0; i < sizeX; i++) {
		for (int j = 0; j < sizeY; j++) {
			std::cout << mat[i][j] << " ";
		}
		std::cout << "\n";
	}
	return 0;
}
	