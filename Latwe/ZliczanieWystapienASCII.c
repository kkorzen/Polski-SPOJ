/*
    Kod zadania:    PROGC02
    Link:           https://pl.spoj.com/problems/PROGC02/
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_STR_SIZE 2048

int main() {

    setlocale(LC_CTYPE, "");

    unsigned char str[MAX_STR_SIZE] = { 0 };
    int ascii[256] = { 0 };
    int line_amount = 0;

    while (fgets(str, MAX_STR_SIZE, stdin)) {
        for (int i = 0; i < strlen(str); i++) {
            ascii[(unsigned char)str[i]]++;
        }
        line_amount++;
    }
    ascii['\n'] = line_amount;

    for (int i = 0; i < 256; i++) {
        if (ascii[i] != 0) {
            printf("%d %d\n", i, ascii[i]);
        }
    }

    return 0;
}