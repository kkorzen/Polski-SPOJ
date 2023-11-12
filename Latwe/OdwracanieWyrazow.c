/*
	Kod zadania:	KC009
	Link:			https://pl.spoj.com/problems/KC009/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* ReverseStr(char* str) {
	int len = strlen(str);
	char* s = calloc(len + 1, sizeof(char));
	for (int i = 0; i < len; i++)
		s[i] = str[len - i - 1];
	return s;
}

int main() {
	char str[1001];

	while (fgets(str, sizeof(str), stdin)) {
		char* rstr = ReverseStr(str);
		printf("%s\n", rstr);
		free(rstr);
	}

	return 0;
}
