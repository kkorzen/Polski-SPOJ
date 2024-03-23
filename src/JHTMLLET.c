/*
	Kod zadania:	JHTMLLET
	Link:			https://pl.spoj.com/problems/JHTMLLET/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

	char str[200];
	_Bool bracket = 0; // 0 - closed | 1 - opened

	while (fgets(str, 200, stdin)) {
		int len = strlen(str);

		for (int i = 0; i < len; i++) {
			if (str[i] == '<') {
				bracket = 1;
			}
			if (bracket && str[i] != '>') {
				str[i] = toupper(str[i]);
			}
			if (str[i] == '>') {
				bracket = 0;
			}
		}

		printf("%s\n", str);
	}

	return 0;
}
