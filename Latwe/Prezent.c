/*
    Kod zadania:    AL_03_08
    Link:           https://pl.spoj.com/problems/AL_03_08/
*/

#include <stdio.h>

int main() {

    int value = 0;
    int max = -1;
    int stmax = -1; // second to max

    while (1) {
        scanf("%d", &value);
        if (!value) break;

        if (value > max) {
            stmax = max;
            max = value;
        }
        if (value != max && value > stmax)
            stmax = value;
    }

    if (stmax == -1)
        printf("%d", max);
    else
        printf("%d", stmax);

    return 0;
}