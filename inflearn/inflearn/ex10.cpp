#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// array
	int arr[] = { 3, 1, 4, 1, 5 };
	//printf("%d\n", sizeof(arr));

	for (int i = 0; i < sizeof(arr)/4; i++) {
		printf("%d\n", arr[i]);
	}

}