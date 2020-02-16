#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 다차원 배열
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6},
	};

	int nRow = (sizeof(arr) / sizeof(arr[0]));
	int nCol = sizeof(arr[0]) / sizeof(int);
	
	printf("shape: (%d, %d)\n", nRow, nCol);
	
	for (int i = 0; i < nRow; i++) {
		for (int j = 0; j < nCol; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}