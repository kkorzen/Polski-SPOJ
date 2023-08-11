#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
	int i = 0;
	float A, B, C;
	float delta, pierw_delt;
	float x1, x2;
 
	while (scanf("%f %f %f", &A, &B, &C) == 3) {
		delta = B * B - 4 * A * C;
		if (delta >= 0) {
			pierw_delt = sqrt(delta);
			x1 = (-B - pierw_delt) / (2 * A);
			x2 = (-B + pierw_delt) / (2 * A);
			if (x1 == x2)
				puts("1");
			else
				puts("2");
		}
		else {
			puts("0");
		}
	}
 
	return 0;
} 
