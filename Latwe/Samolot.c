/*
	Kod zadania:	POTSAM
	Link:			https://pl.spoj.com/problems/POTSAM/
*/

#include <stdio.h>

int calc(int _n1, int _k1, int _n2, int _k2)
{
	return _n1 * _k1 + _n2 * _k2;
}

int main() {
	int n1 = 0, k1 = 0, n2 = 0, k2 = 0;

	scanf("%d %d %d %d", &n1, &k1, &n2, &k2);
	printf("%d\n", calc(n1, k1, n2, k2));

	return 0;
}
