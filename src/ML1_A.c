// Kod: ML1_A
// Link: https://pl.spoj.com/problems/ML1_A/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int DayToNumber(char *s) {
    if (!strcmp(s, "pon")) return 0;
    if (!strcmp(s, "wt")) return 1;
    if (!strcmp(s, "sr")) return 2;
    if (!strcmp(s, "czw")) return 3;
    if (!strcmp(s, "pt")) return 4;
    if (!strcmp(s, "sob")) return 5;
    if (!strcmp(s, "niedz")) return 6;
}

int Max(int *arr, int n) {
    int max = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int main() {
    static int n;
    static char day[6];
    static int training_days[7];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", day);
        training_days[DayToNumber(day)]++;
    }

    printf("%d %d\n", Max(training_days, 7), n);

    return 0;
}
