// Kod: FR_15_03
// Link: https://pl.spoj.com/problems/FR_15_03/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    static bool player[100];
    static char str[11];
    static int n, k, players_playing;

    scanf("%d", &n);

    while (n--) {
        scanf("%d %s", &k, str);
        if (!strcmp(str, "ja") || !strcmp(str, "bede") || !strcmp(str, "gram")) {
            player[k - 1] = true;
        }
        if (!strcmp(str, "odpadam") || !strcmp(str, "rezygnuje")) {
            player[k - 1] = false;
        }
    }


    for (int i = 0; i < 100; i++) {
        if (player[i]) players_playing++;
    }

    if (players_playing >= 10) {
        printf("Gramy! Bedzie nas %d\n", players_playing);
    }
    else {
        printf("Nie gramy :( Jest nas tylko %d\n", players_playing);
    }

    return 0;
}