#include <iostream>;

int main() {
	
	// ���� �ʱ�ȭ 
	int a(10); // int a = 10;
	int b(a+5);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	// ���� ��� for��
	int arr[] = { 1, 2, 3, 4, 5 };

	for (int n : arr) { // arr�� 0��° ���Һ��� ������ iterate
		std::cout << n << " ";
		n *= 10; // call-by-value: n�� �ٲ㵵 arr�� ���� �ٲ��� ����
	}
	std::cout << std::endl;

	// arr�� ���� �ٲٰ� ������ reference ������ ���
	for (int &n : arr) {
		n *= 10;
	}

	std::cout << std::endl;
	for (int n : arr) { 
		std::cout << n << " ";
	}

	// r-value : ������ (������ �� ���� ��)
	// l-value : ���� (������ �� �ִ� ��)

}
