/*
	���������: �������� ����
	+ - * / % =
	+= -= *= /= %=
	++ --
*/

#include <stdio.h>

int main() {
	int a = 5;
	printf("a�� ���� %d����...\n", a);
	
	a += 3; // =: ���� ����
	printf("a�� 3�� ���ߴ��� %d��(��) �Ǿ���.\n", a);

	
	printf("\n\n==== ��ġ ���� ���� === \n");
	int b = 10;
	int c;

	c = ++b;
	printf("b�� %d, c�� %d\n", b, c);

	printf("\n\n==== ��ġ ���� ���� === \n");
	int d = 10;
	int e;

	e = d++;
	printf("d�� %d, e�� %d\n", d, e);

}