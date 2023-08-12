#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main() {
	int a = 0, b = 0;
 
	scanf("%d %d", &a, &b);
 
 
	if (a != 0 && a != 1 && a != -1) printf("f(x)=%dx", a);
	else if (a == 1) printf("f(x)=x");
	else if (a == -1) printf("f(x)=-x");
	else if (a == 0) printf("f(x)=%d", b);
 
	if (a != 0) {
		if (b > 0)printf("+%d", b);
		else if (b == 0) printf("");
		else if (b < 0) printf("-%d", -b);
	}
 
	return 0;
} 
