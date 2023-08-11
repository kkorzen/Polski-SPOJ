#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <ctype.h>
 
int Calc(char op, int a, int b) {
	switch (op) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	case '%':
		return a % b;
	default:
		return 0;
	}
}
 
 
int main() {
	char op;
	int a, b;
	
	while (scanf(" %c %d %d", &op, &a, &b)==3) {
		printf("%d\n", Calc(op, a, b));
	}
 
	return 0;
} 
