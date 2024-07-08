// Kod: NIEKOLEJ
// Link: https://pl.spoj.com/problems/NIEKOLEJ/

#include <stdio.h>

_Bool IsValid(int n) {
    if(n==0) return 1;
    return !(n <= 2);
}

_Bool IsEven(int n) {
    return !(n % 2);
}

void CalcTheOrder(int n) {
    int start = n - !IsEven(n);
    for (int i = start; i >= 0; i -= 2) {
        printf("%d ", i);
    }
    start = n - IsEven(n);
    for (int i = start; i > 0; i -= 2) {
        printf("%d ", i);
    }
}

int main() {
    static int n;
    scanf("%d", &n);

    if (IsValid(n)) {
        CalcTheOrder(n);
    }
    else {
        puts("NIE");
    }

    return 0;
}
