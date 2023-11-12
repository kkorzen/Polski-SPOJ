/*
	Kod zadania:	PP0602A
	Link:			https://pl.spoj.com/problems/PP0602A/
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int t, n;
	int* arr;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		arr = calloc(n, sizeof(int));
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[j]);
		}
		for (int j = 1; j < n; j += 2) {
			printf("%d ", arr[j]);
		}
		for (int j = 0; j < n; j += 2) {
			printf("%d ", arr[j]);
		}

		puts("");
		free(arr);
	}

	return 0;
}
