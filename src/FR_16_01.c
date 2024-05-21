// Kod: FR_16_01
// Link: https://pl.spoj.com/problems/FR_16_01/

#include <stdio.h>

int main() {
  int a, b, n;
  scanf("%d %d %d", &a, &b, &n);
  if (n == 33) puts("WRACAJ");
  else if(a>b) puts("W PRAWO");
  else puts("W LEWO");
  return 0;
}