// Kod: PRIME_T
// Link: https://pl.spoj.com/problems/PRIME_T/

#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; (i * i) <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {

    int n, x;
    scanf("%d", &n);

    for (int i = 0;i < n;i++) {
        scanf("%d", &x);
        if (IsPrime(x))
            printf("TAK\n");
        else
            printf("NIE\n");
    }

    return 0;
}
