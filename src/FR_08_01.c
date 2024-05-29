// Kod: FR_08_01
// Link: https://pl.spoj.com/problems/FR_08_01/

#include <stdio.h>
#include <string.h>

int main() {
    static char str[20];

    fgets(str, 20, stdin);
    //str[strlen(str) - 1] = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] % 2 == 0) {
            puts("Tak");
            return 0;
        }
    }

    puts("Nie");

    return 0;
}