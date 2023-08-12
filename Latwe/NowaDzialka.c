#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
 
int main() {
	int D, X;
	scanf("%d", &D);
	for (int i = 0; i < D; i++) {
		scanf("%d", &X);
		printf("%d\n", X * X);
	}
 
	return 0;
} 
