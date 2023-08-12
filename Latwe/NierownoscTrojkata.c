#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
 
int main() {
 
	float a, b, c;
	while (scanf("%f %f %f", &a, &b, &c) == 3) {
		if (((a + b > c) && (a + c > b)) && (b + c > a)) puts("1");
		else if (((a == 0) || (b == 0)) || (c == 0)) puts("0");
		else puts("0");
	}
 
	return 0;
} 
