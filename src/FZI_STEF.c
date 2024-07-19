// Kod: FZI_STEF
// Link: https://pl.spoj.com/problems/FZI_STEF/

#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int income = 0;
    long long int sum = 0;
    long long int max = 0;

    while (n--) {
        scanf("%d", &income);
        sum += income;
        if (sum > max) max = sum;
        if (sum < 0) sum = 0;
    }

    printf("%llu\n", max);

    return 0;
}
