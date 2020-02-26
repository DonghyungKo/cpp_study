//1. 다음 프로그램의 출력 결과는?

#include <stdio.h>
#include <iostream>

typedef int Point[2];
typedef Point* PointPtr;

struct Location {
	int x, y;

	void swap() {
		int tmp = x;
		x = y;
		y = tmp;

	}
};
int main() {
	Point p = { 3, 4 }; // int 배열
	PointPtr pp = &p; // int 배열을 가르키는 포인터

	std::cout << **pp << std::endl; // *(*&p) == *p == *(&p[0]) == 3
	std::cout << (*pp)[0] << std::endl; // p[0]
	std::cout << (*pp)[1] << std::endl; // p[1]

	// 2번 문제
	Location loc = { 3, 4 };
	loc.swap();

	std::cout << "(" << loc.x << ", " << loc.y << ")" << std::endl;
		
	return 0;
}