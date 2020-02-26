#include <stdio.h>
#include <iostream>

struct Time {
	int h, m, s;
	
	// ����ü �ȿ��� �Լ��� �����ϸ� (��� �Լ�)
	// �Լ� ������ ����ü�� ��������� ������ �� ����
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
