/*
    Kod zadania:    KC010
    Link:           https://pl.spoj.com/problems/KC010/
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    int numbers = 0, words = 0;

    char* str_ptr = NULL;
    size_t str_max_len = 0;
    size_t str_len = 0;


    while ((str_len = getline(&str_ptr, &str_max_len, stdin)) != -1) {
        for (int i = 0; i < str_len; i++) {
            if (isspace(str_ptr[i + 1]) || str_ptr[i + 1] == '\0') {
                if (isalpha(str_ptr[i])) words++;
                if (isdigit(str_ptr[i])) numbers++;
            }
        }
        printf("%d %d\n", numbers, words);
        numbers = words = 0;
    }

    return 0;
}