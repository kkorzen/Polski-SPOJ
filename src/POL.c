/*
	Kod zadania:	POL
	Link:			https://pl.spoj.com/problems/POL/
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// W przypadku nieparzystej dlugosci lancucha, polowa zostanie zaokraglona w dol
// np. "banan" -> "ba"
char* CutHalf(char* str) {
	int len = strlen(str);
	char* s = calloc(len / 2 + 1, 1);
	for (int i = 0; i < len / 2; i++) {
		s[i] = str[i];
	}
	return s;
}

int main() {
	int t;
	scanf("%d", &t);

	char str[2001];

	for (int i = 0; i < t; i++) {
		scanf("%s", str);
		char* s = CutHalf(str);
		printf("%s\n", s);
		free(s);
	}

	return 0;
}
