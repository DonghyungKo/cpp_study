
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {

	// getchar / putchar	
	// �ϳ��� ���ڿ��� ��/����ϴ� �Լ�
	//char ch;
	
	//ch = getchar(); // call by value
	//putchar(ch);
	
	//gets, puts
	// �� ���� ���ڿ��� ��/����ϴ� �Լ�
	//char str[100];
	//gets_s(str);
	//puts(str);

	// sscanf / sprintf
	//char str[] = "450";
	//int n;
	//sscanf_s(str, "%d", &n);
	//printf("n�� ��: %d\n", n);

	// ���� ����: rand()
	// �Ź� �ٸ� ������ �������ֱ� ���ؼ��� ����ؼ� seed�� �ٲ��־�� ��
	//srand(time(NULL)); // 1970.01.01 00:00:00�κ��� ���� �ð��� �ʴ����� ��Ÿ�� ��

	//for (int i = 0; i < 10; i++) {
	//	std::cout << rand() %10 +1 << std::endl; // 1 ~ 10���� ����
	//}

	// exit(0): �ٷ� ���α׷��� �����Ű�� ��ɾ�
	int sum = 0;
	int n;

	for (int i = 0; i < 5; i++) {
		std::cin >> n;

		if (n <= 0) {
			std::cout << "INPUT ERROR\n";
			exit(0);
		}

		sum += n;
	}

	std::cout << "Sum of input value : " << sum << std::endl;
	return 0;
} 