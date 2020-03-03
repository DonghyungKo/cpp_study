#include <iostream>

int n; //���� ����
void set() {
	n = 10;
}

namespace doodle {
	int n;
	void set();
}

void doodle::set() { // ����� ���Ǹ� �и��� �� ����
	n = 20;
}

namespace google {
	int n;
	void set() {
		n = 30;
	}

	namespace chrome {
		int n;
		void set() {
			n = 40;
		}
	}
}


int main() {

	::set();
	doodle::set();
	google::set();
	google::chrome::set();

	std::cout << n << std::endl;
	std::cout << doodle::n << std::endl;
	std::cout << google::n << std::endl;
	std::cout << google::chrome::n << std::endl;
	
	
	
	return 0;
}