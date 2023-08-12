#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
float srednia(int* arr, int n) {
	int sum = 0;
	for (int i = 0;i < n;i++) {
		sum += *(arr + i);
	}
	return (float)sum / n;
}
 
int find_nearest(int* arr, int n, float avg) {
	float min = fabs(arr[0] - avg);
	int idx = 0;
 
	for (int i = 0;i < n;i++) {
		if (fabs(arr[i] - avg) < min) {
			min = fabs(arr[i] - avg);
			idx = i;
		}
	}
 
	return idx;
}
 
int main() {
	int t, n;
	int* arr;
	scanf("%d", &t);
 
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		arr = (int*)malloc(sizeof(int) * (n + 1));
		for (int j = 0;j < n;j++) {
			scanf("%d", arr+j);
		}
		float x_sr = srednia(arr, n);
		printf("%d\n", arr[find_nearest(arr, n, x_sr)]);
	}
 
	return 0;
} 
