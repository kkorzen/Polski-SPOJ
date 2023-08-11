#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdint.h>
#include <math.h>

/* Wykorzystano double, aby zapobiec bledom zwiazynm z dzieleniem calkowitoliczbowym */
unsigned long long NewtonSymbol(int _n, int _k) {
	double n = (double)_n;
	double k = (double)_k;
	double res = 1;
	
	for (double i = 1;i <= k;i++) {
		res = res * (n - i + 1);
		res = res / i;
	}
	return (unsigned long long)round(res);
}
 
int main() {
 
	int t;
	int n, k;
	
	scanf("%d", &t);
	for (int i = 0;i < t;i++) {
		scanf("%d %d", &n, &k);
		printf("%llu\n", NewtonSymbol(n, k));
	}
 
	return 0;
} 
