// Àç±ÍÇÔ¼ö

#include <stdio.h>
#include <iostream>

void rec(int n) {
	std::cout << "n :" << n << std::endl;
	rec(n+1);
}

int main() {
	int n = 0;
	rec(n);
}