#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	int n = 2;

	if (n % 2 == 0) {
		printf("n�� ¦���Դϴ�.");
	} else {
		printf("n�� Ȧ���Դϴ�.");
	}
	*/
	printf("�� ���� : 1\n");
	printf("�ҷ����� : 2\n");
	printf("���� : 3\n");
	printf("ũ���� : 4\n");
	
	int choice;
	scanf("%d", &choice);
	/*
	if (choice == 1) {
		printf("�� ���� �Դϴ�.\n");
	} else if (choice == 2) {
		printf("���� ������ �ҷ��ɴϴ�.\n");
	} else if (choice == 3) {
		printf("������ �ҷ��ɴϴ�.\n");
	} else if (choice == 4) {
		printf("ũ������ �ҷ��ɴϴ�.\n");
	} else {
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	*/
	
	switch (choice) {
		case 1:
			printf("�� ���� \n");
			break;
		case 2:
			printf("�ҷ����� \n");
			break;
		case 3:
			printf("����\n");
			break;
		case 4:
			printf("Break\n");
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}


}	