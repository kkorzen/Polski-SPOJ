/*
	Kod zadania: 	PRIME_T
	Link:			https://pl.spoj.com/problems/PRIME_T/
*/

#include <stdio.h>
#include <stdbool.h>

bool Is_Prime(int n) {
	char divisors = 0;

	if (n == 1)
		return false;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			divisors++;
		if (divisors > 2)
			return false;
	}

	return true;
}

int main() {

	int n, x;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		if (Is_Prime(x))
			puts("TAK");
		else
			puts("NIE");
	}

	return 0;
}
