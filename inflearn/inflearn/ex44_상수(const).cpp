// 상수 : 변하지 않는 수
// 변수 : 변할 수 있는 수
// 상수를 만드는 식별자 : const, macro, enum

#include <stdio.h>
#include <iostream>

// 매크로로 상수 선언
#define PI 3.141592; 

// enum으로 상수 선언
enum EGameState {
	MAINMENU,
	PLAYING,
	PAUSE,
	GAMEOVER,

};

int main() {

	int currState = 0;

	//const double PI = 3.141592; // const로 상수 선언
	while (true) {
		switch (currState) {
		case MAINMENU:
			break;

		case PLAYING:
			break

		case PAUSE:
			break
		}

	}

	return 0;
}