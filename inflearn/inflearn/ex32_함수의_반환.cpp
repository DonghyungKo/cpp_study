#include <stdio.h>
#include <iostream>

int add(int a, int b) {
	return a + b;
}

int buyItem(int* money, int* itemCnt, int cost, int cnt) {
	if (*money < cost) {
		return -1;
	}

	*itemCnt += cnt;
	*money -= cost;
	return 0;
}
int main() {
	
	//int x = 3;
	//int y = 5;
	//int sum = add(x, y);

	//std::cout << sum << std::endl;
	
	int money = 1000;
	int itemCnt = 0;

	int result = buyItem(&money, &itemCnt, 500, 5);
	std::cout << "Return Code : " << result << std::endl;

	return 0;
}