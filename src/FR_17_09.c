// Kod: FR_17_09
// Link: https://pl.spoj.com/problems/FR_17_09/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char openings[5] = { '(', '[', '{', '<' };
char closings[5] = { ')', ']', '}', '>' };

bool Is_In_String(char* str, char c) {
    for (int i = 0;i < strlen(str);i++) {
        if (str[i] == c) return true;
    }
    return false;
}

int Index(char* str, char c) {
    for (size_t i = 0;i < strlen(str);i++) {
        if (str[i] == c) return i;
    }
    return -1;
}

char* Foo(char* str) {
    size_t len = strlen(str);
    char* temp = calloc(len + 1, sizeof(char));
    size_t temp_idx = 0;
    for (size_t i = 0;i < len;i++) {
        if (Is_In_String(openings, str[i])) {
            temp[temp_idx] = str[i];
            temp_idx++;
        }
        if (Is_In_String(closings, str[i])) {
            if (strlen(temp) == 0) return "Nie";
            if (str[i] == closings[Index(openings, temp[temp_idx - 1])]) {
                temp_idx--;
                temp[temp_idx] = '\0';
            }
        }
        //printf("%d. %s -- %d\n", i, temp, temp_idx);
    }
    if (strlen(temp) == 0) return "Tak";
    else return "Nie";
}



int main() {
    char nawiasy[100002]; // koniec linii + '\n' od fgets()

    fgets(nawiasy, sizeof(nawiasy), stdin);
    nawiasy[strlen(nawiasy) - 1] = 0;

    printf("%s\n", Foo(nawiasy));

    return 0;
}