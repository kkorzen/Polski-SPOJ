// Kod zadania: SIGMA_PL
// Link: https://pl.spoj.com/problems/SIGMA_PL/

#define _CRT_SECURE_NO_WARNINGS


#include <stdbool.h>
#include <stdio.h>
#include <math.h>

typedef unsigned long long ull_t;

ull_t Sigma(ull_t n) {
    int cnt = 0;
    int sq_root = sqrt(n);
    ull_t divisor = 2;
    ull_t prod = 1;

    while (n > 1 && divisor <= sq_root) {
        while (n % divisor == 0) {
            cnt++;
            n /= divisor;
        }
        prod *= (pow(divisor, (ull_t)cnt + 1) - 1) / (divisor - 1);
        cnt = 0;
        divisor++;
    }

    if (n > 1) {
        prod *= (n * n - 1) / (n - 1);
    }

    return prod;
}

int main() {
    int t = 0;
    ull_t n = 0;

    scanf("%d", &t);

    while (t--) {
        scanf("%ld", &n);
        printf("%ld\n", Sigma(n));
    }

    return 0;
}
