// Dyrektywa dla poprawnego dzialania funkcji scanf() w Visual Studio
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Calc(int _seg, int* _arr) {
	int sum = _seg-1;
	for (int i = 0;i < _seg;i++) {
		sum += _arr[i];
	}
	return sum;
}

int main() {

	int t, n;
	int* arr;
	scanf("%d", &t);

	for (int i = 0;i < t;i++) {
		scanf("%d", &n);
		arr = (int*)calloc(n, sizeof(int));
		for (int j = 0;j < n;j++) {
			scanf("%d", arr + j);
		}
		printf("%d\n", Calc(n, arr));
		free(arr);
	}

	return 0;
}
