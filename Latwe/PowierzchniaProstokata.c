// Kod zadania: AL_26_02
// Link: https://pl.spoj.com/problems/AL_26_02/

#include <stdio.h>

unsigned long long Foo(unsigned long long n) {
    if (n % 2 != 0) return 0;
    if (n % 4 != 0) return (n/4+1)*(n/4);

    return n/4 * n/4;
}

int main() {
    unsigned short t = 0;
    unsigned long long n = 0;

    scanf("%d", &t);

    while (t--) {
        scanf("%ld", &n);

        unsigned long long result = Foo(n);

        if (result == 0)
            puts("BRAK");
        else
            printf("%lld\n", result);
    }
    return 0;
}