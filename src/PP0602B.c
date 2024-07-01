// Kod: PP0602B
// Link: https://pl.spoj.com/problems/PP0602B/

#include <stdio.h>
#include <stdlib.h>

int** CreateEmptyMatrix(int l, int k) {
    int** arr = (int**)calloc(l, sizeof(int*));
    for (int i = 0; i < l; i++) {
        arr[i] = (int*)calloc(k, sizeof(int));
    }
    return arr;
}

void free2D(int** arr, int l) {
    for (int i = 0; i < l; i++) {
        free(arr[i]);
    }
    free(arr);
}

void Scan2DArr(int** arr, int l, int k) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void Print2DArr(int** arr, int l, int k) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
}

void Copy2DArr(int** src, int** dest, int l, int k) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < k; j++) {
            dest[i][j] = src[i][j];
        }
    }
}

int** RotateFrame(int** arr, int l, int k) {
    int** rotated_arr = CreateEmptyMatrix(l, k);
    Copy2DArr(arr, rotated_arr, l, k);
    for (int j = 0; j < k - 1; j++) {
        rotated_arr[0][j] = arr[0][j + 1];
        rotated_arr[l - 1][j + 1] = arr[l - 1][j];
    }
    for (int i = 0; i < l - 1; i++) {
        rotated_arr[i + 1][0] = arr[i][0];
        rotated_arr[i][k - 1] = arr[i + 1][k - 1];
    }
    return rotated_arr;
}

int main() {
    static int t, l, k;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &l, &k);
        int** arr = CreateEmptyMatrix(l, k);
        Scan2DArr(arr, l, k);
        int** rotated_arr = RotateFrame(arr, l, k);
        Print2DArr(rotated_arr, l, k);
        free2D(rotated_arr, l);
        free2D(arr, l);
    }
    return 0;
}