/*
    Kod zadania:    KC008
    Link:           https://pl.spoj.com/problems/KC008/
*/

#include <stdio.h>

int main() {

    long long number = 0;
    long long sum = 0;
    long long total_sum = 0;

    while (scanf("%lld", &number) == 1) {
        if (number == 0) {
            printf("%lld\n", sum);
            total_sum += sum;
            sum = 0;
            continue;
        }
        sum += number;
    }
    printf("%lld", total_sum);


    return 0;
}
