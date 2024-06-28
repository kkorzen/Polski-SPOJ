// Kod: FR_AA_04
// Link: https://pl.spoj.com/problems/FR_AA_04/

#include <stdio.h>

int main() {
    static int n;
    static int temp;
    static int arr[101];
    static int unique_numbers;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        arr[temp + 50]++;
    }

    for (int i = 0; i < 101; i++) {
        if (arr[i] > 0) unique_numbers++;
    }

    printf("%d\n", unique_numbers);

    return 0;
}