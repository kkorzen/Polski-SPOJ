/*
	Kod zadania:	PP0501A
	Link:			https://pl.spoj.com/problems/PP0501A/
*/

#include <stdio.h>

// Algorytm Euklidesa
int nwd(int _a, int _b) {
	int a = _a, b = _b, r;
	while (1) {
		r = a % b;
		if (r == 0) return b;
		else {
			a = b;
			b = r;
		}
	}
}

int main() {

	int t, a, b;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n\n", nwd(a, b));
	}

	return 0;
}

