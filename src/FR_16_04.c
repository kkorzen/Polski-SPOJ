// Kod: FR_16_04
// Link: https://pl.spoj.com/problems/FR_16_04/

#include <stdio.h>

int main() {
  static int n;
  static float sum;

  scanf("%d", &n);

  if (n > 1000) {
    sum += (n - 1000);
    n -= (n - 1000);
  }

  sum += n * (0.05 * (float)(n / 100));

  printf("%.2f\n", sum);

  return 0;
}