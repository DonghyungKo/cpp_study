#include <stdio.h>
#include <iostream>

void buyItem(int *itemCnt, int *money) {
	(*itemCnt)++;
	*money -= 10;

	std::cout << "아이템을 구매하였습니다." << std::endl;
	std::cout << "  아이템 개수: " << *itemCnt << std::endl;
	std::cout << "  잔액: " << *money << std::endl;

}
int main(void) {

	int itemCnt = 0;
	int money = 100;
	
	// 아이템을 산다.
	buyItem(&itemCnt, &money);
	buyItem(&itemCnt, &money);
	buyItem(&itemCnt, &money);
	buyItem(&itemCnt, &money);
	buyItem(&itemCnt, &money);

	return 0;
}
