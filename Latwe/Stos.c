/*
	Kod zadania:	STOS
	Link:			https://pl.spoj.com/problems/STOS/
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int stack[10] = { 0 };
	char i = -1;
	char op;
	int temp;

	while (scanf(" %c", &op) == 1) {
		switch (op) {
		case '+':
			i++;
			scanf("%d", &temp);
			if (i <= 9) {
				stack[i] = temp;
				puts(":)");
			}
			else puts(":(");
			break;
		case '-':
			if (i > 9) i = 9;
			if (i >= 0)
				printf("%d\n", stack[i--]);
			else
				puts(":(");
			break;
		default:
			puts(":(");
			break;
		}
	}
}
