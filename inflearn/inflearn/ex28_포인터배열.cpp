// 28�� ������ �迭

#include <iostream>

int main() {

	int arr[4] = { 1, 2, 3, 4 };

	// ������ �迭�� �����͵��� �迭
	int* ptr[4];
	
	for (int i = 0; i < 4; i++) {
		ptr[i] = &arr[i];
	}
	
	for (int i = 0; i < 4; i++) {
		std::cout << *ptr[i] << std::endl;
	}

	// ������ �迭�� ���ӻ�
	// ���ڿ��� ù���� ��� �޸� �ּҸ� ����Ű�� �����͵��� �迭�� ����
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