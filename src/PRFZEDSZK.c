/*
	Kod zadania:	PRFZEDSZK
	Link:			https://pl.spoj.com/problems/PRZEDSZK/
*/

#include <stdio.h>

/*
	Nalezy znalezc najmniejsza wspolna wielokrotnosci (NWW) licz 'a' oraz 'b'. Liczba ta
	bedzie iloscia cukierkow, ktore podzielic mozna po rowno bez reszty w kazdej grupie.

	NWW znalexc mozna poprzez podzielenie iloczynu liczb 'a' i 'b' przez ich najwiekszy
	wspolny dzielnik (NWD). Jego wartosc z kolei znalezc mozna korzystajac z algorytmu
	Euklidesa.
*/

// Algorytm Euklidesa na znalezienie NWD
int NWD(int a, int b) {
	int r;
	while (1) {
		r = a % b;
		if (r == 0) return b;
		else {
			a = b;
			b = r;
		}
	}
}

int NWW(int a, int b) {
	return a * b / NWD(a, b);
}

int main() {
	int a = 0, b = 0;
	int N = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", NWW(a, b));
	}

	return 0;
}
