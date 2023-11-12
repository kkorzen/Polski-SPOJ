/*
	Kod zadania:	PTCLTZ
	Link:			https://pl.spoj.com/problems/PTCLTZ/
*/

#include <stdio.h>

int Collatz(int n) {
	int cnt = 0;
	int x = n;

	while (x != 1) {
		if (x % 2 == 0) {
			x = x / 2;
		}
		else {
			x = 3 * x + 1;
		}
		cnt++;
	}

	return cnt;

}

int main() {
	int n;

	int t = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		printf("%d\n\n", Collatz(n));
	}

	return 0;
}
