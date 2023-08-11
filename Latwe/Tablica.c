#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>
 
int main() {
	int i = 0;
	int* reg = calloc(1, sizeof(int));
	
	while (scanf("%d", (reg + i)) == 1) {
		i++;
		reg = (int*)realloc(reg,sizeof(int)*(i+1));
	}
 
	for (int j = i-1;j >= 0;j--) {
		printf("%d ", reg[j]);
	}
 
	free(reg);
 
	return 0;
} 
