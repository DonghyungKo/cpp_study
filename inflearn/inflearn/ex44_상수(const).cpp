// ��� : ������ �ʴ� ��
// ���� : ���� �� �ִ� ��
// ����� ����� �ĺ��� : const, macro, enum

#include <stdio.h>
#include <iostream>

// ��ũ�η� ��� ����
#define PI 3.141592; 

// enum���� ��� ����
enum EGameState {
	MAINMENU,
	PLAYING,
	PAUSE,
	GAMEOVER,

};

int main() {

	int currState = 0;

	//const double PI = 3.141592; // const�� ��� ����
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