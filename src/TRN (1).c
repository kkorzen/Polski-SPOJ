/*
	Kod zadania:	TRN
	Link:			https://pl.spoj.com/problems/TRN/
*/

/*
[PL]
Transpozycja macierzy z wykorzystaniem tablicy JEDNOWYMIAROWEJ alokowanej dynamiczne.
W celu zwolnienia pamieci wystarczy uzyc wbudowanej funkcji free().
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int* Matrix_Transpose(int* arr, int rows, int cols) {
	int t_rows = cols;
	int t_cols = rows;
	int k = 0;

	int* temp = calloc(t_rows * t_cols, sizeof(int));

	for (int i = 0; i < t_rows * t_cols; i += t_cols) {
		for (int j = 0; j < t_cols; j++) {
			temp[i + j] = arr[k + t_rows * j];
		}
		k++;
	}
	return temp;
}

int main() {

	int rows = 0, cols = 0;

	scanf("%d %d", &rows, &cols);

	int* arr = calloc(rows * cols, sizeof(int));
	for (int i = 0; i < cols * rows; i++)
		scanf("%d", &arr[i]);

	int* t = Matrix_Transpose(arr, rows, cols);

	for (int i = 0; i < cols * rows; i++) {
		if (i % rows == 0)
			puts("");
		printf("%d ", t[i]);
	}

	free(arr);
	free(t);

	return 0;
}
