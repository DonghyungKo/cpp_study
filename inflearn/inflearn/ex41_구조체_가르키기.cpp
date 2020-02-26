// 구조체 포인터

struct Product {
	int num;
	char name[100];
	int price;
};

#include <stdio.h>
#include <iostream>

// call-by-reference: 매개변수를 포인터로 입력 받아야 함
void discountPrice(Product* ptr, int dscRate) {
	if (dscRate > 100) {
		std::cout << "ERROR: 할인률은 100%를 초과할 수 없습니다.";
	}

	ptr->price = ptr->price * (100 - dscRate) / 100;
}

int main() {
	Product hanrabong{ 1, "제주 한라봉", 20000 };
	Product* ptr = &hanrabong;
	
	// -> : 구조체 포인터로 멤버변수를 가르킬 때 사용하는 연산자
	// ptr->num = (*ptr).num
	std::cout << "상품 번호: " << ptr->num << std::endl;
	std::cout << "상품명: " << (*ptr).name << std::endl;
	std::cout << "가격: " << (*ptr).price << std::endl;

	discountPrice(ptr, 10);
	std::cout << "할인 적용 후, 가격: " << (*ptr).price << std::endl;


	return 0;
}