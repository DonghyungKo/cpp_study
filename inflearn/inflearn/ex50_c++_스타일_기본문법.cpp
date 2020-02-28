#include <iostream>;

int main() {
	
	// 변수 초기화 
	int a(10); // int a = 10;
	int b(a+5);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	// 범위 기반 for문
	int arr[] = { 1, 2, 3, 4, 5 };

	for (int n : arr) { // arr의 0번째 원소부터 끝까지 iterate
		std::cout << n << " ";
		n *= 10; // call-by-value: n을 바꿔도 arr의 값이 바뀌지 않음
	}
	std::cout << std::endl;

	// arr의 값을 바꾸고 싶으면 reference 변수를 사용
	for (int &n : arr) {
		n *= 10;
	}

	std::cout << std::endl;
	for (int n : arr) { 
		std::cout << n << " ";
	}

	// r-value : 오른쪽 (수정할 수 없는 값)
	// l-value : 왼쪽 (수정할 수 있는 값)

}
