// Kod: PASTAB4
// Link: https://pl.spoj.com/problems/PASTAB4/

#include <stdio.h>
#include <math.h>

#define SZEROKOSC 30
#define ARR_SIZE 21

int MaxInArray(int* arr, int len) {
    int max = -100;
    for (int i = 0; i < len; i++) if (arr[i] > max) max = arr[i];
    return max;
}

int main() {
    static int arr[ARR_SIZE];
    static int num;
    static int num_cnt;

    while (scanf("%d", &num)==1) {
        arr[num + ARR_SIZE / 2]++;
        num_cnt++;
    }

    if(!num_cnt) return 0;

    int max = MaxInArray(arr, ARR_SIZE);
    

    for (int i = 0; i < ARR_SIZE; i++) {
        if (i > 0 && i < ARR_SIZE - 1) printf(" ");
        if (i > ARR_SIZE / 2 - 1) printf(" ");

        printf("%d:|", i - ARR_SIZE / 2);

        float f_stars_cnt = (float)SZEROKOSC * (float)arr[i] / (float)max;
        int stars_cnt = (int)(round(f_stars_cnt));

        for (int j = 0; j < stars_cnt; j++) {
            printf("*");
        }
        for (int j = 0; j < SZEROKOSC - stars_cnt; j++) {
            printf(" ");
        }

        printf("|\n");
    }

    return 0;
}
