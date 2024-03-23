/*
	Kod zadania:	PP0602D
	Link:			https://pl.spoj.com/problems/PP0602D/
*/

#include <stdio.h>
#include <stdlib.h>

void Shift_Left(int arr[], int len) {
	int temp = arr[0];
	for (int i = 1; i < len; i++) {
		arr[i - 1] = arr[i];
	}
	arr[len - 1] = temp;
}

int main() {

	int n, k;
	int* tab;

	scanf("%d %d", &n, &k);
	tab = (int*)malloc(sizeof(int) * (n + 1));

	for (int j = 0; j < n; j++) {
		scanf("%d", tab + j);
	}

	for (int j = 0; j < k; j++) {
		Shift_Left(tab, n);
	}

	for (int j = 0; j < n; j++) {
		printf("%d ", tab[j]);
	}

	free(tab);
	puts("");

	return 0;
}
