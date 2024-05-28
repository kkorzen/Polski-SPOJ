// Kod: FR_16_06
// Link: https://pl.spoj.com/problems/FR_16_06/


#include <stdio.h>
#include <ctype.h>

int IntReverse(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main() {
    char c = '0';
    int sum = 0;
    int n = 0;
    int mulitiplicant = 1;
    int p = 0, q = 0;
    int last_zeroes_count = 1;

    while (c!=EOF) {
        c = getc(stdin);
        if (isdigit(c)) {
            n += (c - 48) * mulitiplicant;
            mulitiplicant *= 10;
            p++;
            if (c == '0') {
                if (q == p - 1) last_zeroes_count++;
                else last_zeroes_count = 1;
                q = p;
            }
        }
        else {
            n = IntReverse(n);
            if (q == p) {
                while (last_zeroes_count--) {
                    n *= 10;
                }
            }
            sum += n;
            n = 0;
            mulitiplicant = 1;
            last_zeroes_count = 1;
        }
    }

    printf("%d\n", sum);

    return 0;
}