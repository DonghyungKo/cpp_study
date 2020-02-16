#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// // ÆÄ½ºÄ®ÀÇ »ï°¢Çü
	int pascal[10][10];

	int nRow = (sizeof(pascal) / sizeof(pascal[0]));

	for (int i = 0; i < nRow; i++) {
		for (int j = 0; j <= i; j++) {

			if (j == 0 || j == i) {
				pascal[i][j] = 1;
			}
			else {
				pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
			}
			
			printf("%d ", pascal[i][j]);
		}
		printf("\n");
	}
}