// Kod: FR_AA_04
// Link: https://pl.spoj.com/problems/FR_AA_04/

#include <stdio.h>

int main() {
    static int n;
    static int temp;
    static int arr[101];
    static int unique_numbers;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &temp);
        if (arr[temp + 50] == 0) unique_numbers++;
        arr[temp + 50]++;
    }
    
    printf("%d\n", unique_numbers);

    return 0;
}