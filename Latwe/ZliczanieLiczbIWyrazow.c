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
    long long str_max_len = 0;
    long long str_len = 0;


    while (1) {
        str_len = getline(&str_ptr, &str_max_len, stdin);
        if (str_len == -1) break;
        for (int i = 0; i < str_len; i++) {
            if (isalpha(str_ptr[i]) && (isspace(str_ptr[i + 1]) || str_ptr[i + 1] == '\0')) words++;
            if (isdigit(str_ptr[i]) && (isspace(str_ptr[i + 1]) || str_ptr[i + 1] == '\0')) numbers++;
        }
        printf("%d %d\n", numbers, words);
        numbers = words = 0;
    }

    return 0;
}