/*
	Kod zadania:	WWO_01_05
	Link:			https://pl.spoj.com/problems/WWO_01_05/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int CharToInt(char c) {
	return c - 48;
}

char CountDigits(int _n) {
	char digits = 1;
	while (_n /= 10) {
		digits++;
	}
	return digits;
}

char* ReverseStr(char* str) {
	int len = strlen(str);
	char* s = calloc(len + 1, sizeof(char));
	for (int i = 0; i < len; i++)
		s[i] = str[len - i - 1];
	return s;
}

char* IntToCharArray(int _n) {
	char digits = CountDigits(_n);
	char* str = calloc(digits + 1, sizeof(char));
	for (int i = digits - 1; i >= 0; i--) {
		str[i] = _n % 10 + 48;
		_n /= 10;
	}
	return str;
}

int BinToDec(int _n) {
	char* str = ReverseStr(IntToCharArray(_n));
	int len = strlen(str);
	int result = 0;

	for (int i = 0; i < len; i++) {
		if (str[i] != '0' && str[i] != '1') return -1;
		result += CharToInt(str[i]) * pow(2, i);
	}
	return result;
}


int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d%d:%d%d", BinToDec(a), BinToDec(b), BinToDec(c), BinToDec(d));

	return 0;
}
