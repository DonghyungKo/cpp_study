#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i=1;
	
	while (i <= 10) {
		printf("%d\n", i);
		i++;
	}
	printf("�ݺ��� ����\n");
		
	// do-while: ������ �������� �ʾƵ� �ѹ��� ������ ����

	do {
		printf("%d\n", i);
		i++;
	} while (i <= 10);
	
	// while ���� Ư���� ����
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
	}

}