/*
	Kod zadania: 	FCTRL3
	Link:			https://pl.spoj.com/problems/FCTRL3/
*/

#include <stdio.h>

void Factorial_Last_Two_Digits(int n, unsigned char* res) {
	char cd = 0, cj = 0;
	switch (n) {
	case 0: case 1: cj = 1; break;
	case 2: cj = 2; break;
	case 3: cj = 6; break;
	case 4: cj = 4; cd = 2; break;
	case 5: case 6: cd = 2; break;
	case 7: cd = 4; break;
	case 8: cd = 2; break;
	case 9: cd = 8; break;
	default: break;
	}
	// res[0] - ostatnia cyfra (cj - cyfra jednosci)
	// res[1] - przedostatnia cyfra (cd - cyfra dziesiatek)
	*res = cj;
	*(res + 1) = cd;
}

int main() {

	int D, n;
	unsigned char r[2];
	scanf("%d", &D);

	for (int i = 0; i < D; i++) {
		scanf("%d", &n);
		Factorial_Last_Two_Digits(n, r);
		printf("%d %d\n", *(r + 1), *(r));
	}

	return 0;
}
