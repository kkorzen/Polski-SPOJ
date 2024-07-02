// Kod: FR_AA_07
// Link: https://pl.spoj.com/problems/FR_AA_07/

#include <stdio.h>

int main() {
    static long long int k, n;
    static long long int middle;
    static long long int offset;
    static _Bool is_k_even;

    scanf("%llu %llu", &k, &n);

    if (k % 2 == 0) is_k_even = 1; else is_k_even = 0;

    middle = n / k; 
    offset = (-1) * (k / 2 - is_k_even);

    for (int i = 0; i < k / 2 - is_k_even ; i++) {
        printf("%d ", middle + (offset++));
    }
  
    printf("%d ", middle);
  
    for (int i = 0; i < k / 2 ; i++) {
        printf("%d ", middle + (++offset));
    }

    return 0;
}
