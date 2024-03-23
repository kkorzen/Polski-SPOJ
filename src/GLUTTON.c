/*
	Kod zadania:	GLUTTON
	Link:			https://pl.spoj.com/problems/GLUTTON/
*/

#define MAX_SEC 86400

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Calc(int* _t, int _N, int _M) {
	int res = 0;
	int* cookies_a_day = calloc(_N, sizeof(int));
	int total_cookies = 0;

	for (int i = 0; i < _N; i++) {
		cookies_a_day[i] = MAX_SEC / _t[i];
		total_cookies += cookies_a_day[i];
	}

	res = ceil((float)total_cookies / (float)_M);

	free(cookies_a_day);
	return res;
}

int main() {

	int C;
	scanf("%d", &C);

	int N = 0, M = 0;
	int* t;

	for (int z = 0; z < C; z++) {
		scanf("%d %d", &N, &M);
		t = calloc(N, sizeof(int));
		for (int v = 0; v < N; v++) {
			scanf("%d", t + v);
		}
		printf("%d\n\n", Calc(t, N, M));
		free(t);
	}

	return 0;
}
