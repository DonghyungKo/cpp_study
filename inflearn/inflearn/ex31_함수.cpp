#include <stdio.h>
#include <iostream>

void buyItem(int *itemCnt, int *money) {
	(*itemCnt)++;
	*money -= 10;

	std::cout << "�������� �����Ͽ����ϴ�." << std::endl;
	std::cout << "  ������ ����: " << *itemCnt << std::endl;
	std::cout << "  �ܾ�: " << *money << std::endl;

}
int main(void) {

	int itemCnt = 0;
	int money = 100;
	
	// �������� ���.
	buyItem(&itemCnt, &money);
	buyItem(&itemCnt, &money);
	buyItem(&itemCnt, &money);
	buyItem(&itemCnt, &money);
	buyItem(&itemCnt, &money);

	return 0;
}
