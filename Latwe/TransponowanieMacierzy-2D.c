/*
Transpozycja macierzy z wykorzystaniem tablicy DWUWYMIAROWEJ alokowanej dynamicznie.
W celu zwolnienia pamieci nalezalo napisac dodatkowa funkcje free2D, ktora najpierw zwalnia
miejsce przydzielone na kolumny, a potem na wiersze.
*/

#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>
 
int** Matrix_Transpose(int** arr, int rows, int cols) {
	int t_rows = cols;
	int t_cols = rows;
	int** temp = (int**)calloc(t_rows, sizeof(int*));
 
	for (int i = 0;i < t_rows;i++)
		*(temp + i) = (int*)calloc(t_cols, sizeof(int));
 
	for (int i = 0;i < t_rows;i++)
		for (int j = 0;j < t_cols;j++)
			temp[i][j] = arr[j][i];
	
	return temp;
}

void free2D(int** x, int rows){
    for(int i=0;i<rows;i++)
        free(x[i]);
    free(x);
}
 
int main() {
	
	int rows = 0, cols = 0;
 
	scanf("%d %d", &rows, &cols);
 
	int** arr = (int**)calloc(rows, sizeof(int*));
	for (int i = 0;i < rows;i++) {
		*(arr + i) = (int*)calloc(cols, sizeof(int));
	}
 
	for (int i = 0;i < rows;i++)
		for (int j = 0;j < cols;j++)
			scanf("%d", &arr[i][j]);
 
	int** t = Matrix_Transpose(arr, rows, cols);
 
	puts("");
 
	for (int i = 0;i < cols;i++) {
		for (int j = 0;j < rows;j++)
			printf("%d ", t[i][j]);
		puts("");
	}
 
	free2D(arr, rows);
	free2D(t, cols);
 
	return 0;
} 
