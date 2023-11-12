/*
	Kod zadania:	EUCGAME
	Link:			https://pl.spoj.com/problems/EUCGAME/
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Calc(int _a, int _b) {
	int a = _a, b = _b;
	bool player = false;	// true -> pierwszy ; false -> drugi

	while ((a != b) && (a > 0) && (b > 0)) {
		player = (a < b) ? true : false;
		if (player) {
			b -= a;
		}
		else {
			a -= b;
		}
	}
	return a + b;
}

int main() {
	int a, b, t;

	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", Calc(a, b));
	}

	return 0;
}
