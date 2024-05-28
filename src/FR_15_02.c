// Kod: FR_15_02
// Link: https://pl.spoj.com/problems/FR_15_02/

#include <stdio.h>

int main() {
    static int n;
    static int p;
    static char name[21];
    static short houses[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &p, name);
        houses[p - 1]++;
    }

    p = 0;

    for (int i = 0; i < 1000; i++) {
        if (houses[i] != 0) {
            p++;
        }
    }

    printf("%d\n", p);

    return 0;
}