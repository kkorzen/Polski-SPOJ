/*
	Kod zadania:	PROGC01
	Link:			https://pl.spoj.com/problems/PROGC01/
*/

#include <stdio.h>

int main() {

	char str[200] = { 0 };
	int cnt = 0;

	while (fgets(str, 200, stdin)) {
		cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}
