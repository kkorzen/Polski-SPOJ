#include <stdio.h>

unsigned int Foo(unsigned long long n) {
    int cnt = 0;
    while (n >= 5) {
        n /= 5;
        cnt += n;
    }
    return cnt;
}

int main() {
    int t = 0;
    unsigned long long n = 0;

    scanf("%d", &t);

    while (t--) {
        scanf("%lu", &n);
        printf("%lu\n", Foo(n));
    }
    return 0;
}