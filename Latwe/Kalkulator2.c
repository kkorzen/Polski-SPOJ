/*
	Kod zadania:	CALC2
	Link:			https://pl.spoj.com/problems/CALC2/
*/

#include <stdio.h>
#include <ctype.h>

void Calc(char op, int a, int b, int reg[]) {
	switch (op) {
	case '+':
		printf("%d\n", reg[a] + reg[b]);
		break;
	case '-':
		printf("%d\n", reg[a] - reg[b]);
		break;
	case '*':
		printf("%d\n", reg[a] * reg[b]);
		break;
	case '/':
		printf("%d\n", reg[a] / reg[b]);
		break;
	case '%':
		printf("%d\n", reg[a] % reg[b]);
		break;
	case 'z':
		reg[a] = b;
		break;
	default:
		break;
	}
}


int main() {
	char op;
	int a, b;
	int reg[10];

	while (scanf(" %c %d %d", &op, &a, &b) == 3) {
		Calc(op, a, b, reg);
	}

	return 0;
}
