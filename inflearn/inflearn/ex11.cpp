#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int arr[1000];

	printf("입력할 숫자의 갯수 : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		printf("%d", arr[n - (i+1)]);
	}
}