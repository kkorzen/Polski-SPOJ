#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
 
int Collatz_RC(int n, int* cnt) {
	if (n == 1)
		return *cnt;
	if (n % 2 == 0) {
		(*cnt)++;
		return Collatz_RC(n / 2, cnt);
	}
	else {
		(*cnt)++;
		return Collatz_RC(3 * n + 1, cnt);
	}
	return 0;
}
 
int main() {
	int n;
	int cnt = 0;
	int* p = &cnt;
 
	int t = 0;
	scanf("%d", &t);
 
	for (int i = 0;i < t;i++) {
		scanf("%d", &n);
		printf("%d\n\n", Collatz_RC(n, p));
		*p = 0;
	}
 
	return 0;
} 
