#include <iostream>
#include <string>

void ex01() {
	/*
	1. 이름과 점수를 입력받고, 다음과 같이 출력되는 프로그램을 작성해보세요.

	이름 입력: 두들낙서
	점수 입력 : 80
	두들낙서님의 점수는 80점입니다.
	*/

	std::string name;
	int score;
	
	std::cout << "이름 입력 : ";
	std::cin >> name;
	std::cout << "점수 입력 : ";
	std::cin >> score;
	std::cout << name << "님의 점수는 " << score << "점입니다." << std::endl;
}

int main() {

	//ex01();

	int arr[2][3] = { 
		{1,2,3},
		{4,5,6} 
	};
	
	for (auto &row : arr) {
		for (auto &col : row){
			std::cout << col << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}