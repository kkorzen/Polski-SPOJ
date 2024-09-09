// Kod: UPS12_A
// Link: https://pl.spoj.com/problems/UPS12_A/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// 0: not a pangram
// 1: pangram
// 2: perfect pangram
int CheckPangram(int arr[], int N) {
    for (int i = 0; i < N; i++)  if (arr[i] == 0) return 0;

    int last_num = arr[0];
    for (int i = 1; i < N; i++) {
        if (last_num != arr[i]) return 1;
        last_num = arr[i];
    }

    return 2;
}

int main() {
    char alphabet[27] = { 'a','b','c','d','e','f','g','h','i',
                          'j','k','l','m','n','o','p', 'q', 'r','s','t',
                          'u','v','w','x','y','z' };

    int count_arr[26] = { 0 };

    char* str = NULL;
    size_t buffer_size = 0;
    size_t len;

    len = getline(&str, &buffer_size, stdin);

    for (int i = 0; i < len; i++) {
        str[i] = toupper(str[i]);
        count_arr[str[i] - 65]++;
    }

    switch (CheckPangram(count_arr, 26)) {
        case 0:
            puts("NIE");
            break;
        case 1:
            puts("PANGRAM");
            break;
        case 2:
            puts("PANGRAM PERFEKCYJNY");
            break;
    }

    return 0;
}