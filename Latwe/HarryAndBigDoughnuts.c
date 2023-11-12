/*
	Kod zadania:	DOUGHNUT
	Link:			https://pl.spoj.com/problems/DOUGHNUT/
*/

#include <stdio.h>

int main() {
	int c = 0;	// liczba kotow
	int k = 0;	// udzwig Harry'ego
	int w = 0;	// waga jednego paczka

	int t = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &c, &k, &w);
		if (c * w <= k) puts("yes");
		else puts("no");
	}

	return 0;
}
