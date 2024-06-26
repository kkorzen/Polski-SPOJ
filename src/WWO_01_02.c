// Kod: WWO_01_02
// Link: https://pl.spoj.com/problems/WWO_01_02/

#include <stdio.h>
#include <math.h>

int main() {
    static int a, b, c;
    const float side_eff = 5.0f;
    const float roof_eff = 3.0f;

    scanf("%d %d %d", &a, &b, &c);

    float cans_for_sides = ceil((float)(2*a*c + 2*b*c) / side_eff);
    float cans_for_roof = ceil((float)(a*b)/roof_eff);

    printf("%d\n", (int)(cans_for_roof + cans_for_sides)); 

    return 0;
}