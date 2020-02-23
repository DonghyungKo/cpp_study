/*
	프로토타입(prototype)
	함수의 원형만 선언하고 구체적인 기능에 대한 정의는 나중에 하는 방식
*/
#include <stdio.h>
#include <iostream>

// 함수 prototype 선언
void walk(int); // 걷기
void rotate(int); // 돌기
void drawSquare(void); // 정사각형 형태로 이동하여 제자리로 돌아오는 함수

int main() {

	drawSquare();
	return 0;
}


// 걷기
void walk(int distance) {
	std::cout << distance << "cm를 이동하였습니다." << std::endl;
}

// 돌기
void rotate(int angle) {
	std::cout << angle << "도 회전하였습니다." << std::endl;
}

// 정사각형 모양으로 걷기
void drawSquare() {
	int distance = 10;
	int angle = 90;

	for (int i = 0; i < 4; i++) {
		walk(distance);
		rotate(angle);
	}
}