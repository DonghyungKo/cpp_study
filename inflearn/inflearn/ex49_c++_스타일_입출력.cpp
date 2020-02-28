#include <iostream>
#include <string>
//using namespace std;

namespace a {
	int n = 10;
}

namespace b {
	int n = 20;
}

int main() {

	std::string str; // 배열 형태로 선언하지 않음
	str = "Hello "; 
	str += "World!"; // 덧셈 연산이 가능

	std::cout << str << std::endl;
	std::cout << a::n << std::endl;
	std::cout << b::n << std::endl;


	return 0;

}
