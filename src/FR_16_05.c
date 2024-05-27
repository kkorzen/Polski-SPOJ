// Kod: FR_16_05
// Link: https://pl.spoj.com/problems/FR_16_05/

#define SECONDS_IN_A_DAY 86400

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    static int n, bells;
    char str[6];

    scanf("%d", &n);

    while (n--) {
        scanf("%s", str);

        int hours = atoi(strtok(str, ":"));
        int minutes = atoi(strtok(NULL, ":"));

        int hours_to_midnight = 24 - hours;
        int half_hours = hours_to_midnight;

        if (minutes != 0) hours_to_midnight--;
        if (minutes > 30) half_hours--;



        if (hours_to_midnight == 24) {
            bells += 168;
        }
        else if (hours_to_midnight >= 12 && hours_to_midnight < 24) {
            for (int i = 1; i <= 11; i++) {
                bells += 12 - i;
            }
            for (int i = 1; i <= hours_to_midnight - 12; i++) {
                bells += 12 - i;
            }
            bells += half_hours;
            bells += 12; // dodawanie za godzine 12:00
        }
        else {
            for (int i = 1;i <= hours_to_midnight;i++) {
                bells += 12 - i;
            }
            bells += half_hours;
        }

        printf("%d\n", bells);
        bells = 0;
    }

    return 0;
}