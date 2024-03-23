/*
	Kod zadania:	PROGC05
	Link:			https://pl.spoj.com/problems/PROGC05/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[1001] = { 0 };
	char c = 0;

	while (scanf(" %c %s", &c, str) == 2) {
		int len = strlen(str);
		for (int i = 0; i < len; i++) {
			if (str[i] == c) str[i] = 0;
			if (str[i] != 0) printf("%c", str[i]);
		}
		puts("");
	}
}
