// ������(pointer)
#include <iostream>

int main(void) {
	
	int a = 3;
	int* aPtr = &a;

	std::cout << &a << std::endl;
	std::cout << aPtr << std::endl;

	std::cout << a << std::endl;
	std::cout << *&a << std::endl;
	std::cout << *aPtr << std::endl;

	// �迭�� ������
	int arr[10] = { 1,2,3 };

	// �迭 ������ �����ʹ� �迭�� ù��° ���Ҹ� ����Ŵ
	std::cout << (int)&arr << std::endl;
	std::cout << (int)&arr[0] << std::endl;

	// �迭�� ���� �ּ� �ڿ� 1�� ���ϸ� �ڷ����� ũ��(Byte)��ŭ
	// �̵��Ͽ� ���� �ּҸ� ����Ŵ
	//for (int i = 0; i < 10; i++) {	
	//	int* ptr = &arr[i];
	//	std::cout << (int)ptr << std::endl;
	//}
	
	// �Ʒ��� 3�� for���� ��� ����
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
		3. ptr + 1 == ptr�� sizeof(*ptr)�� ���� ��
	*/
	return 0;
}