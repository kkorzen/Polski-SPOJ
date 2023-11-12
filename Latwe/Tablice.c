/*
	Kod zadania:	PP0502B
	Link:			https://pl.spoj.com/problems/PP0502B/
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int t, n;
	int* arr;

	scanf("%d", &t);

	puts("");
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);

		arr = (int*)malloc(sizeof(int) * (n + 1));
		if (arr == NULL) exit(1);

		for (int j = 0; j < n; j++) {
			scanf("%d", arr + j);
		}
		for (int j = n - 1; j >= 0; j--) {
			printf("%d ", arr[j]);
		}

		puts("");

		free(arr);
	}

	return 0;
}
