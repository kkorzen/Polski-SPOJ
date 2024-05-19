// Kod: FR_17_06
// Link: https://pl.spoj.com/problems/FR_17_06/

#include <stdio.h>
#include <stdlib.h>

void PrintArray(int* arr, int n) {
    for (int i = 0;i < n;i++)
        printf("%d ", arr[i]);
}

void Spill(int* arr, int n, int p) {
    int number_of_spills;
    int function_iteration = 1;
start_function:
    number_of_spills = 0;
    for (int i = 0;i < n-1;i++) {
        if (arr[i] != 0 && arr[i + 1] != p) {
            if (arr[i] + arr[i + 1] <= p) {
                arr[i + 1] += arr[i];
                arr[i] = 0;
            }
            else {
                arr[i] -= (p - arr[i+1]);
                arr[i + 1] = p;
            }
            number_of_spills++;
            //printf("%d-%d: ", function_iteration, number_of_spills);
            //PrintArray(arr, n); puts("");
        }
    }
    if (number_of_spills > 0) {
        function_iteration++;
        goto start_function;
    }
}

int main() {
    int n = 0, p = 0, q = 0, cup_idx = 0;
    int* arr = NULL;

    scanf("%d %d", &n, &p);
    arr = calloc(n, sizeof(int));

    for (int i = 0;i < n;i++) {
        scanf("%d", arr + i);
    }

    Spill(arr, n, p);

    scanf("%d", &q);

    while (q--) {
        scanf("%d", &cup_idx);
        printf("%d\n", arr[cup_idx - 1]);
    }

    free(arr);

    return 0;
}