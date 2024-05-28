// Kod: FR_15_01
// Link: https://pl.spoj.com/problems/FR_15_01/

#define MILE_TO_KM 1.609344

#include <stdio.h>

int main() {
    int k = 0;
    scanf("%d", &k);
    if((float)k / MILE_TO_KM < 300) puts("NIE");
    else if((float)k / MILE_TO_KM >= 300 && (float)k / MILE_TO_KM < 500) puts("SPRAWDZIMY TWOJE OBECNE BUTY");
    else puts("TAK");
    return 0;
}