#include <ctype.h>
#include <stdio.h>
#include <string.h>

const char VOWELS[6] = {'A', 'E', 'I', 'O', 'U', 'Y'};

void Remove_Char_At_Index(char str[], int idx);
_Bool Is_Vowel(char c);

_Bool First_Elimination(char str[], int max_n);
_Bool Second_Elimination(char str[], int max_n);
_Bool Third_Elimination(char str[], int max_n);
_Bool Fourth_Elimination(char str[], int max_n);

void Elimination(char str[], int man_x);

int main() {
    int n = 0, len = 0, step = 1;
    char str[65637];

    scanf("%d", &n);
    scanf("%s", str);
    Elimination(str, n);
    puts(str);

    return 0;
}

void Remove_Char_At_Index(char str[], int idx) {
    int i;
    for (i = idx; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }
    str[i] = '\0';
}

_Bool Is_Vowel(char c) {
    for (int i = 0; i < 6; i++) {
        if (c == VOWELS[i]) return 1;
    }
    return 0;
}

_Bool First_Elimination(char str[], int max_n) {
    for (int i = strlen(str) - 1; i >= 0; i--) {
        if (strlen(str) <= max_n) return 1;
        if (!isalnum(str[i])) Remove_Char_At_Index(str, i);
    }
    return 0;
}
_Bool Second_Elimination(char str[], int max_n) {
    for (int i = strlen(str) - 1; i >= 0; i--) {
        if (strlen(str) <= max_n) return 1;
        if (isdigit(str[i])) Remove_Char_At_Index(str, i);
    }
    return 0;
}
_Bool Third_Elimination(char str[], int max_n) {
    _Bool first_vowel_found = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (strlen(str) <= max_n) return 1;
        if (Is_Vowel(str[i])) {
            if (first_vowel_found == 0) {
                first_vowel_found = 1;
                continue;
            }
            Remove_Char_At_Index(str, i);
            i--;
        }
    }
    return 0;
}
_Bool Fourth_Elimination(char str[], int max_n) {
    for (int i = strlen(str) - 2; i >= 0; i--) {
        if (strlen(str) <= max_n) return 1;
        Remove_Char_At_Index(str, i);
    }
    return 0;
}

void Elimination(char str[], int max_n) {
    if (First_Elimination(str, max_n) || Second_Elimination(str, max_n) ||
        Third_Elimination(str, max_n) || Fourth_Elimination(str, max_n)) {
        return;
    }
}
