// Kod: FR_AA_03
// Link: https://pl.spoj.com/problems/FR_AA_03/

#include <stdio.h>
#include <string.h>

int main() {
    static char str[101];
    static int stack;
    static _Bool is_marked;

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '+') stack++;
        if (str[i] == '-') stack--;
        if (stack == 3) {
            printf("5 ");
            stack = 0;
            is_marked = 1;
        }
        if (stack == -3) {
            printf("1 ");
            stack = 0;
            is_marked = 1;
        }
    }

    if (!is_marked) printf("BRAK");

    puts("");

    return 0;
}