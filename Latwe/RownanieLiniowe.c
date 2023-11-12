/*
	Kod zadania:	JROWLIN
	Link:			https://pl.spoj.com/problems/JROWLIN/
*/

#include <stdio.h>
#include <string.h>

int main() {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);

	if (a == 0.0f) {
		if (b == c)
			printf("NWR\n");
		else
			printf("BR\n");
	}
	else {
		float x = (c - b) / a;
		printf("%.2f", x);
	}
	return 0;
}
