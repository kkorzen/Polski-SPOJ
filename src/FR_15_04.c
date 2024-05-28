// Kod: FR_15_04
// Link: https://pl.spoj.com/problems/FR_15_04/

#include <stdio.h>

typedef struct Place {
    int x, y;
}Place_t;

int main() {
    static Place_t jas_place;
    static Place_t other_place;
    static int n;
    static float a;
    static int cnt;

    scanf("%d %d", &jas_place.x, &jas_place.y);
    scanf("%d", &n);

    a = (float)jas_place.y / (float)jas_place.x;

    while (n--) {
        scanf("%d %d", &other_place.x, &other_place.y);
        if (a * (float)other_place.x == (float)other_place.y && other_place.x < jas_place.x) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}