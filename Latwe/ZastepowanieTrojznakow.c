// Kod zadania : WI_TRIGR
// Link : https://pl.spoj.com/problems/WI_TRIGR/

#include <stdio.h>
#include <string.h>

const char SYMBOLS[9] = {'=', '/', 39, '(', ')', '!', '<', '>', '-'};

void Remove_Char_At_Index(char str[], int idx);
_Bool Is_Symbol(char c);
void Modify_Line(char str[]);

int main() {
    char line[1000];
    while (fgets(line, 1000, stdin) != NULL) {
        Modify_Line(line);
        puts(line);
    }
    return 0;
}

void Remove_Char_At_Index(char str[], int idx) {
    int i = 0;
    for (i = idx; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }
    str[i] = '\0';
}

_Bool Is_Symbol(char c) {
    for (int i = 0; i < 9; i++) {
        if (c == SYMBOLS[i]) return 1;
    }
    return 0;
}

void Modify_Line(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == '?' && str[i + 1] == '?' && Is_Symbol(str[i + 2])) {
            for (int k = 0; k < 2; k++) Remove_Char_At_Index(str, i);
            if (str) switch (str[i]) {
                    case '=':
                        str[i] = '#';
                        break;
                    case '/':
                        str[i] = '\\';
                        break;
                    case 39:  // (') symbol - apostrophe
                        str[i] = '^';
                        break;
                    case '(':
                        str[i] = '[';
                        break;
                    case ')':
                        str[i] = ']';
                        break;
                    case '!':
                        str[i] = '|';
                        break;
                    case '<':
                        str[i] = '{';
                        break;
                    case '>':
                        str[i] = '}';
                        break;
                    case '-':
                        str[i] = '~';
                        break;
                }
            i--;
        }
    }
}