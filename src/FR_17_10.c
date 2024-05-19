// Kod: FR_17_10
// Link: https://pl.spoj.com/problems/FR_17_10/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main() {
    static char str[1000002];
    static char out[1000002];
    unsigned int out_idx = 0;
    bool odd_length = false;

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = 0;

    if (strlen(str) % 2 == 1) {
        odd_length = true;
    }

    for (int i = strlen(str) - 1;i >= 0;i -= 2) {
        out[out_idx] = str[i];
        out_idx++;
    }

    for (int i = 0;i < strlen(str);i += 2) {
        if (odd_length) {
            i++;
            odd_length = false;
        }
        out[out_idx] = str[i];
        out_idx++;
    }

    printf("%s", out);

    return 0;
}