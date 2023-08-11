#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>
 
void Shift_Left(int arr[], int len) {
	int temp = arr[0];
	for (int i = 1;i < len;i++) {
		arr[i - 1] = arr[i];
	}
	arr[len - 1] = temp;
}
 
int main() {
 
	int t, n;
	int* tab;
	scanf("%d", &t);
 
	for (int i = 0;i < t;i++) {
		scanf("%d", &n);
		tab = (int*)malloc(sizeof(int) * (n + 1));
		for (int j = 0;j < n;j++) {
			scanf("%d", tab + j);
		}
		Shift_Left(tab, n);
		for (int j = 0;j < n;j++) {
			printf("%d ", tab[j]);
		}
		free(tab);
		puts("");
	}
 
	return 0;
}
 
 
