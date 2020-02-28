
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {

	// getchar / putchar	
	// 하나의 문자열을 입/출력하는 함수
	//char ch;
	
	//ch = getchar(); // call by value
	//putchar(ch);
	
	//gets, puts
	// 한 줄의 문자열을 입/출력하는 함수
	//char str[100];
	//gets_s(str);
	//puts(str);

	// sscanf / sprintf
	//char str[] = "450";
	//int n;
	//sscanf_s(str, "%d", &n);
	//printf("n의 값: %d\n", n);

	// 난수 생성: rand()
	// 매번 다른 난수를 생성해주기 위해서는 계속해서 seed를 바꿔주어야 함
	//srand(time(NULL)); // 1970.01.01 00:00:00로부터 지난 시간을 초단위로 나타낸 값

	//for (int i = 0; i < 10; i++) {
	//	std::cout << rand() %10 +1 << std::endl; // 1 ~ 10까지 난수
	//}

	// exit(0): 바로 프로그램을 종료시키는 명령어
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