#include <iostream>
#include <string>

void ex01() {
	/*
	1. �̸��� ������ �Է¹ް�, ������ ���� ��µǴ� ���α׷��� �ۼ��غ�����.

	�̸� �Է�: �ε鳫��
	���� �Է� : 80
	�ε鳫������ ������ 80���Դϴ�.
	*/

	std::string name;
	int score;
	
	std::cout << "�̸� �Է� : ";
	std::cin >> name;
	std::cout << "���� �Է� : ";
	std::cin >> score;
	std::cout << name << "���� ������ " << score << "���Դϴ�." << std::endl;
}

int main() {

	//ex01();

	int arr[2][3] = { 
		{1,2,3},
		{4,5,6} 
	};
	
	for (auto &row : arr) {
		for (auto &col : row){
			std::cout << col << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}