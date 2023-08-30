// Dyrektywa dla poprawnego dzialania funkcji scanf() w Visual Studio
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int* tab, int N) {
	int temp = 0;
	for (int s = 0; s < N - 1; s++) {
		for (int i = 0; i < N - s - 1; i++) {
			if (tab[i] > tab[i + 1]) {
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
		}
	}
}


int main() {
	int D = 0, N = 0;
	int* arr;
	int max = 0;
	int cnt = 0;

	scanf("%d", &D);
	while (D--) {
		scanf("%d", &N);
		arr = calloc(N, sizeof(int));
		for (int i = 0; i < N; i++) {
			scanf("%d", arr + i);
			if (arr[i] > max) max = arr[i];
		}

		for (int i = 0; i < N; i++) {
			if (arr[i] == max)
				cnt++;
		}

		BubbleSort(arr, N);

		for (int i = 0; i < cnt; i++) printf("%d ", max);
		for (int i = 0; i < N - cnt; i++) printf("%d ", arr[i]);

		max = 0;
		cnt = 0;

		puts("");
		free(arr);
	}

	return 0;
}
