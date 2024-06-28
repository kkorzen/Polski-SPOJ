// Kod: FR_AA_02
// Link: https://pl.spoj.com/problems/FR_AA_02/

#include <stdio.h>

int main() {
    static unsigned long long int n;
    static int r;


    scanf("%llu %d", &n,&r);

    n%=10;

    n*=2; n+=5; n*=50; n+=1771; n-=r;

    printf("%llu\n", n%100);

    return 0;
}