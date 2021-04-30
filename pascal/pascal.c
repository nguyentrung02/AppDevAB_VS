#include "pascal.h"

int pascal_triangle(int row) {
	int i, j, space;
	for (i = 0; i < row; i++) {
		for (space = 1; space <= row - i; space++)
			printf("  ");
		for (j = 0; j <= i; j++) {
			printf("%4d", comb(i, j));
		}
		printf("\n");
	}

}

int comb(int n, int k) {
	return fact(n) / (fact(k) * fact(n - k));
}

int fact(int n) {
	if (n == 0) return 1;
	int p = 1;
	for (int i = n; i > 1; i--) {
		p *= i;
	}
	return p;
}