/*
	Kod zadania:	MWPZ06D
	Link:			https://pl.spoj.com/problems/MWPZ06D/
*/

#include <stdio.h>

char* Decide(int L, int C) {
	if (L == 1) return "TAK";
	if (L != 0) {
		if (C % (L - 1) == 0) return "NIE";
		else return "TAK";
	}
	return "NIE";
}

int main() {
	int D;
	unsigned long L, C;

	scanf("%d", &D);

	while (D--) {
		scanf("%lu %lu", &L, &C);
		printf("%s\n", Decide(L, C));
	}

	return 0;
}
