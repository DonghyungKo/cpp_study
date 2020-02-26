// ����ü ������

struct Product {
	int num;
	char name[100];
	int price;
};

#include <stdio.h>
#include <iostream>

// call-by-reference: �Ű������� �����ͷ� �Է� �޾ƾ� ��
void discountPrice(Product* ptr, int dscRate) {
	if (dscRate > 100) {
		std::cout << "ERROR: ���η��� 100%�� �ʰ��� �� �����ϴ�.";
	}

	ptr->price = ptr->price * (100 - dscRate) / 100;
}

int main() {
	Product hanrabong{ 1, "���� �Ѷ��", 20000 };
	Product* ptr = &hanrabong;
	
	// -> : ����ü �����ͷ� ��������� ����ų �� ����ϴ� ������
	// ptr->num = (*ptr).num
	std::cout << "��ǰ ��ȣ: " << ptr->num << std::endl;
	std::cout << "��ǰ��: " << (*ptr).name << std::endl;
	std::cout << "����: " << (*ptr).price << std::endl;

	discountPrice(ptr, 10);
	std::cout << "���� ���� ��, ����: " << (*ptr).price << std::endl;


	return 0;
}