#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
 
bool Check(char s, int w, int n) {
	if (s == '>') {
		if (n > w) return 1;
		else return 0;
	}
	else if (s == '<') {
		if (n < w) return 1;
		else return 0;
	}
	else return 0;
 
}
 
int main() {
	int n = 0;
	int* arr;
	
	int war = 0;
	char sym = 0;
 
	scanf("%d", &n);
	arr = (int*)calloc(n, sizeof(int));
	for (int i = 0;i <= n;i++) {
		scanf("%d", arr + i);
		if (i == n) scanf("%c %d", &sym, &war);
	}
	puts("");
	for (int i = 0;i < n;i++) {
		if (Check(sym, war, arr[i]))
			printf("%d\n", arr[i]);
	}
	
	free(arr);
	
	return 0;
} 
