#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//char: 1����Ʈ ������
	//character: ���� (�ݰ����ڸ�, ABCabc123&*(&#@$)
	//��������: �ѱ�, �Ͼ�, ���� ��
	
	//char a = 65;
	
	//printf("%c\n", a);

	// ASCII : American Standard (����=>���� ���� ǥ��)

	char a;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &a);
	printf("����� �Է��� ���� %c�� ASCII �ڵ�� %d�Դϴ�", a, a);


}