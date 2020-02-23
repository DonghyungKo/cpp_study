// Àç±ÍÇÔ¼ö
// ÆÑÅä¸®¾ó
// n! = n * (n-1)!
#include <stdio.h>
#include <iostream>

int factorial(int n) {
	if (n < 2) {
		return 1;
	}
	return n * factorial(n - 1);
}
int main() {
	int n = 5;
	int result = factorial(n);

	std::cout << n << "! : " << result << std::endl;
}