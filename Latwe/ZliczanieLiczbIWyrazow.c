/*
    Kod zadania:    KC010
    Link:           https://pl.spoj.com/problems/KC010/
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR_SIZE 1024

int main() {

    int numbers = 0;
    int words = 0;

    char str[MAX_STR_SIZE];

    while (fgets(str, MAX_STR_SIZE, stdin) != NULL) {
        str[strcspn(str, "\n")] = 0;
        int len = strlen(str);
        for (int i = 0; i < len; i++) {
            if (isalpha(str[i]) && (isspace(str[i + 1]) || str[i + 1] == '\0')) words++;
            if (isdigit(str[i]) && (isspace(str[i + 1]) || str[i + 1] == '\0')) numbers++;
        }
        fflush(stdin);
        printf("%d %d\n", numbers, words);
        numbers = words = 0;
    }

}