/*
	Kod zadania:	RNO_DOD
	Link:			https://pl.spoj.com/problems/RNO_DOD/
*/

#include <stdio.h>

int main() {

	int t, n, x;
	int sum = 0;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d", &x);
			sum += x;
		}
		printf("%d\n\n", sum);
		sum = 0;
	}

	return 0;
}
