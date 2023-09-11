#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

char* Func(int n) {
	if (n % 6 == 0) return "ab";
	if (n % 2 == 0 && n % 3 != 0) return "a";
	if (n % 2 != 0 && n % 3 == 0) return "b";
	return "";
}

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	for (int i = x;i <= y;i++) {
		printf("%s", Func(i));
	}
	return 0;
}
