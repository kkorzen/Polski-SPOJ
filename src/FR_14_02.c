/*
	Kod zadania:	FR_14_02
	Link:			https://pl.spoj.com/problems/FR_14_02/
*/

#include <stdio.h>
#include <string.h>

_Bool Check(char* str) {
	int len = strlen(str);
	for (int i = 0; i < len - 2; i++) {
		if (str[i] == 's' && str[i + 1] == 't' && str[i + 2] == 'o')
			return 1;
	}
	return 0;
}

int main() {

	char str[200];

	scanf("%s", str);
	if (Check(str)) puts("TAK");
	else puts("NIE");

	return 0;
}
