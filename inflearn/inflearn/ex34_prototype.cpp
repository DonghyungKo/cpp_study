/*
	������Ÿ��(prototype)
	�Լ��� ������ �����ϰ� ��ü���� ��ɿ� ���� ���Ǵ� ���߿� �ϴ� ���
*/
#include <stdio.h>
#include <iostream>

// �Լ� prototype ����
void walk(int); // �ȱ�
void rotate(int); // ����
void drawSquare(void); // ���簢�� ���·� �̵��Ͽ� ���ڸ��� ���ƿ��� �Լ�

int main() {

	drawSquare();
	return 0;
}


// �ȱ�
void walk(int distance) {
	std::cout << distance << "cm�� �̵��Ͽ����ϴ�." << std::endl;
}

// ����
void rotate(int angle) {
	std::cout << angle << "�� ȸ���Ͽ����ϴ�." << std::endl;
}

// ���簢�� ������� �ȱ�
void drawSquare() {
	int distance = 10;
	int angle = 90;

	for (int i = 0; i < 4; i++) {
		walk(distance);
		rotate(angle);
	}
}