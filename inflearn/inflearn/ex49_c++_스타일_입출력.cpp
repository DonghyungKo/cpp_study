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

	std::string str; // �迭 ���·� �������� ����
	str = "Hello "; 
	str += "World!"; // ���� ������ ����

	std::cout << str << std::endl;
	std::cout << a::n << std::endl;
	std::cout << b::n << std::endl;


	return 0;

}
