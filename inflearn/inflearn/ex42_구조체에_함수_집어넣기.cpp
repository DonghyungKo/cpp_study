#include <stdio.h>
#include <iostream>

struct Time {
	int h, m, s;
	
	// 구조체 안에서 함수를 정의하면 (멤버 함수)
	// 함수 내에서 구조체의 멤버변수에 접근할 수 있음
	int calTotalSec(void) {
		return 3600 * h + 60 * m + s;
	}
};

struct Point {
	int x, y;

	void moveRight() { x++; };
	void moveLeft() { x--; };
	void moveUp() { y++; };
	void moveDown() { y--; };

};



int main() {

	Time t = { 1, 22, 48 };
	int totalSec = t.calTotalSec();

	std::cout << "Total Seconds :" << totalSec << std::endl;

	Point p = { 3, 4 };
	std::cout << "(" << p.x << ", " << p.y << ")" << std::endl; // (3, 4)

	p.moveRight();
	p.moveDown();

	std::cout << "(" << p.x << ", " << p.y << ")" << std::endl; // (4, 3)

	return 0;
}
