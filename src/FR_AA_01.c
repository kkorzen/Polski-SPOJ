// Kod: FR_AA_01
// Link: https://pl.spoj.com/problems/FR_AA_01/

#include <stdio.h>

int main() {
    static int t, z, s;
    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &t, &z);
        s += (t - z);
    }
    printf("%d\n", s);
    return 0;
}