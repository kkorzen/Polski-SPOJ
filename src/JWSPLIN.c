/*
	Kod zadania:	JWSPLIN
	Link:			https://pl.spoj.com/problems/JWSPLIN/
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Is_Collinear(int* arr) {
	int a, b;
	bool cond = false;
	if (arr[2] != arr[0]) {
		a = (arr[3] - arr[1]) / (arr[2] - arr[0]);
		b = arr[1] - a * arr[0];

		if (a * arr[4] + b == arr[5])
			cond = true;
	}
	else {
		if (arr[2] == arr[4])
			cond = true;
	}

	if (cond) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int t;
	int arr[6]; // x1,y1 ; x2,y2 ; x3,y3

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 6; j++) {
			scanf("%d", arr + j);
		}
		if (Is_Collinear(arr))
			printf("TAK\n");
		else
			printf("NIE\n");
		puts("");
	}

	return 0;
}
