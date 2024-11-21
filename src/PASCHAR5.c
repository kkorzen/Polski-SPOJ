// Kod: PASCHAR5
// Link: https://pl.spoj.com/problems/PASCHAR5/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// typ: 5 -> ROT5; 13 -> ROT13
// slaba funkcja, nie dziala dobrze dla duzych rotow,
// ale cel zadania spelnia
char rot(char _c, int _type) {
	unsigned char new_char = _c + _type;

	if(isdigit(_c) && new_char > 57){
		return new_char - 10;
	}

	if ((islower(_c) && new_char > 122) ||
		(isupper(_c) && new_char > 90)) {
		return new_char - 26;
	}

	return new_char;
}

int main(void) {
	char* str = NULL;
	size_t size = 0;
	size_t len = 0;

	while ((len = getline(&str, &size, stdin)) != -1) {
		if (str[strlen(str) - 1] == '\n')str[strlen(str) - 1] = 0;
		for (int i = 0;i < strlen(str);i++) {
			if (isdigit(str[i])) str[i] = rot(str[i], 5);
			if (isalpha(str[i])) str[i] = rot(str[i], 13);
		}
		printf("%s\n", str);
	}

	return 0;
}
