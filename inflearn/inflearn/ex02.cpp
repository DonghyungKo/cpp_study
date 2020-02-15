#include <stdio.h>

int main() {

	// sizeof(x): x�� ũ�⸦ �˷���
	// x: �� (int, float), ���� �̸�
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	int a = 3.14;
	double b = 10;

	printf("%d\n", a);
	printf("%f\n", b);

	// �Ǽ��� ������ ������ ������, �Ҽ����� ������
	// ������ �Ǽ��� ������ ������, �� �����

	// ����ȯ: �ڷ����� �ٸ� �ڷ������� �ٲٴ� �۾�
	printf("==============================\n");

	int math = 90;
	int korean = 95;
	int english = 96;
	int sum = math + korean + english;
	double avg = (double)sum / 3;

	// ���� / ���� = ���� (�Ҽ����� ������)
	// �Ǽ� / ���� = �Ǽ�
	// �Ǽ� / �Ǽ� = �Ǽ�
	printf("%f\n", avg); // 93.666667

}