/*
	Kod zadania:	MWPZ06X
	Link:			https://pl.spoj.com/problems/MWPZ06X/
*/

#include <stdio.h>

int main() {
	int D, X;
	scanf("%d", &D);
	for (int i = 0; i < D; i++) {
		scanf("%d", &X);
		printf("%d\n", X * X);
	}

	return 0;
}
