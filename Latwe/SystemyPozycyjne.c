#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char IntToChar(int n) {
	return n + 48;
}

double log_b(int n, int base) {
	return log(n) / log(base);
}

char* Convert(int n, int base) {
	if (base <= 1 || n < 0) 
		return "Error!";
	
	int reminder = 0;
	int len = log_b(n, base) + 1;
	char* s = calloc(len+1, sizeof(char));
	for (int i = len - 1; i >= 0; i--) {
		reminder = n % base;
		n /= base;
		if (reminder >= 10) s[i] = reminder + 55;
		else s[i] = IntToChar(reminder);
	}
	return s;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%s %s\n", Convert(n, 16), Convert(n, 11));
	}
	return 0;
}
