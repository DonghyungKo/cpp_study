#include <stdio.h>

int main() {

	// sizeof(x): x의 크기를 알려줌
	// x: 형 (int, float), 변수 이름
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	int a = 3.14;
	double b = 10;

	printf("%d\n", a);
	printf("%f\n", b);

	// 실수를 정수형 변수에 담으면, 소수점은 버려짐
	// 정수를 실수형 변수에 담으면, 잘 담아짐

	// 형변환: 자료형을 다른 자료형으로 바꾸는 작업
	printf("==============================\n");

	int math = 90;
	int korean = 95;
	int english = 96;
	int sum = math + korean + english;
	double avg = (double)sum / 3;

	// 정수 / 정수 = 정수 (소수점은 버려짐)
	// 실수 / 정수 = 실수
	// 실수 / 실수 = 실수
	printf("%f\n", avg); // 93.666667

}