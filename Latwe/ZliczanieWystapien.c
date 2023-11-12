/*
	Kod zadania:	KC004
	Link:			https://pl.spoj.com/problems/KC004/
*/

#include <stdio.h>
#include <stdlib.h>

int search(int n, int* arr, int l) {
	int cnt = 0;
	for (int i = 0; i < l; i++) {
		if (arr[i] == n)
			cnt++;
	}
	return cnt;
}

int main() {

	int s = 0, l = 0;
	int* arr;
	while (scanf("%d %d", &s, &l) == 2) {
		arr = calloc(l, sizeof(int));
		for (int i = 0; i < l; i++) {
			scanf("%d", arr + i);
		}
		printf("%d\n", search(s, arr, l));
		free(arr);
	}

	return 0;
}
