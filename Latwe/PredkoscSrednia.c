#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
 
 
int main() {
	int t, v1, v2;
	int vsr;
	scanf("%d", &t);
 
	for (int i = 0;i < t;i++) {
		scanf("%d %d", &v1, &v2);
		vsr = (2 * v1 * v2) / (v1 + v2);
		printf("%d\n", vsr);
	}
 
	return 0;
} 
