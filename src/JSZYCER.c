/*
	Kod zadania:	JSZYCER
	Link:			https://pl.spoj.com/problems/JSZYCER/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char ShiftRight(char c) {
	if (isspace(c))
		return c;
	if ((c >= 41 && c <= 87) || (c >= 97 && c <= 119)) {
		return c + 3;
	}
	else {
		switch (c) {
		case 'X':
			return 'A';
		case 'Y':
			return 'B';
		case 'Z':
			return 'C';
		case 'x':
			return 'a';
		case 'y':
			return 'b';
		case 'z':
			return 'c';
		default:
			return c + 3;

		}
	}
}

int main() {
	char str[200];
	int len;

	while (fgets(str, 200, stdin)) {
		len = strlen(str);
		for (int i = 0; i < len; i++) {
			str[i] = ShiftRight(str[i]);
		}
		printf("%s\n", str);

	}

	return 0;
}
