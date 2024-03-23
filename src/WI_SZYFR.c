#include <ctype.h>
#include <stdio.h>
#include <string.h>

int Char_To_Int(char c);
char Shift_Left(char c, int n);
char Shift_Right(char c, int n);
void Cipher(char str[], char key[]);
void Decipher(char str[], char key[]);

int main() {
    char command[10];
    char key[10];
    char str[1000];

    scanf("%s", command);
    scanf("%s", key);
    scanf("%s", str);

    if (strcmp(command, "SZYFRUJ") == 0) Cipher(str, key);
    if (strcmp(command, "DESZYFRUJ") == 0) Decipher(str, key);

    puts(str);

    return 0;
}

int Char_To_Int(char c) { return c - 48; }

char Shift_Left(char c, int n) {
    if (c - n < 65)
        return (90 - (n - (c - 65)) + 1);
    else
        return c - n;
}

char Shift_Right(char c, int n) {
    if (c + n > 90)
        return (65 + (n - (90 - c)) - 1);
    else
        return c + n;
}

void Cipher(char str[], char key[]) {
    int len_str = strlen(str);
    int len_key = strlen(key);
    int key_idx = 0;

    for (int i = 0; i < len_str; i++) {
        key_idx = i % len_key;
        str[i] = Shift_Right(str[i], Char_To_Int(key[key_idx]));
    }
}

void Decipher(char str[], char key[]) {
    int len_str = strlen(str);
    int len_key = strlen(key);
    int key_idx = 0;

    for (int i = 0; i < len_str; i++) {
        key_idx = i % len_key;
        str[i] = Shift_Left(str[i], Char_To_Int(key[key_idx]));
    }
}