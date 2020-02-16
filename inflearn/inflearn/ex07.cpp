#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	int n = 2;

	if (n % 2 == 0) {
		printf("n은 짝수입니다.");
	} else {
		printf("n은 홀수입니다.");
	}
	*/
	printf("새 게임 : 1\n");
	printf("불러오기 : 2\n");
	printf("설정 : 3\n");
	printf("크레딧 : 4\n");
	
	int choice;
	scanf("%d", &choice);
	/*
	if (choice == 1) {
		printf("새 게임 입니다.\n");
	} else if (choice == 2) {
		printf("기존 게임을 불러옵니다.\n");
	} else if (choice == 3) {
		printf("설정을 불러옵니다.\n");
	} else if (choice == 4) {
		printf("크레딧을 불러옵니다.\n");
	} else {
		printf("잘못 입력하셨습니다.\n");
	}
	*/
	
	switch (choice) {
		case 1:
			printf("새 게임 \n");
			break;
		case 2:
			printf("불러오기 \n");
			break;
		case 3:
			printf("설정\n");
			break;
		case 4:
			printf("Break\n");
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
	}


}	