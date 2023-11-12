/*
	Kod zadania:	PP0601B
	Link:			https://pl.spoj.com/problems/PP0601B/
*/

#include <stdio.h>

int main() {
	int t, x, y, n;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &n, &x, &y);
		for (int j = 0; j < n; j++) {
			if (j % x == 0 && j % y != 0)
				printf("%d ", j);
		}
		puts("");
	}
	return 0;
}
