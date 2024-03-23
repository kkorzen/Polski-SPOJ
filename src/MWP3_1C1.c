// Kod : MWP3_1C1
// Link : https://pl.spoj.com/problems/MWP3_1C1/
 
typedef unsigned long long ull_t;
 
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
 
ull_t Calc_Side(ull_t *a, ull_t *b);
ull_t nwd(ull_t a, ull_t b);
bool isprime(ull_t *n);
 
int main()
{
    ull_t a, b = 0;
    int Z = 0;
    scanf("%d", &Z);
 
    while (Z--)
    {
        scanf("%llu %llu", &a, &b);
        printf("%llu\n", Calc_Side(&a, &b));
    }
 
    return 0;
}
 
ull_t Calc_Side(ull_t *a, ull_t *b)
{
    if (*a != *b)
        return nwd(*a, *b);
    if (isprime(a))
        return 1;
 
    ull_t divisor = 2;
 
    while (*a % divisor != 0)
        divisor++;
 
    return *a / divisor;
}
 
ull_t nwd(ull_t a, ull_t b)
{
    ull_t r;
    while (1)
    {
        r = a % b;
        if (r == 0)
            return b;
        else
        {
            a = b;
            b = r;
        }
    }
}
 
bool isprime(ull_t *n)
{
    for(ull_t i = 2; i<=sqrt(*n); i++)
    {
        if(*n%i==0) return false;
    }
 
    return true;
} 