/*
	Kod zadania:	PA05_POT
	Link:			https://pl.spoj.com/problems/PA05_POT/
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int Last_Digit(int a, int b) {
	switch (a % 10) {
	case 0: return 0;
	case 1: return 1;
	case 2:
		switch (b % 4) {
		case 0: return 6;
		case 1: return 2;
		case 2: return 4;
		case 3: return 8;
		}
	case 3:
		switch (b % 4) {
		case 0: return 1;
		case 1: return 3;
		case 2: return 9;
		case 3: return 7;
		}
	case 4:
		if (b % 2 == 0) return 6;
		return 4;
	case 5: return 5;
	case 6: return 6;
	case 7:
		switch (b % 4) {
		case 0: return 1;
		case 1: return 7;
		case 2: return 9;
		case 3: return 3;
		}
	case 8:
		switch (b % 4) {
		case 0: return 6;
		case 1: return 8;
		case 2: return 4;
		case 3: return 2;
		}
	case 9:
		if (b % 2 == 0) return 1;
		return 9;
	}

}

int main() {
	int D, a, b;
	scanf("%d", &D);

	for (int i = 0; i < D; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", Last_Digit(a, b));
	}

	return 0;
}
