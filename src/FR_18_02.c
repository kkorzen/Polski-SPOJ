// Kod: FR_18_02
// Link: https://pl.spoj.com/problems/FR_18_02/

#include <stdio.h>

int main() {
  int n = 0, b = 0;

  scanf("%d %d", &n, &b);
  float v = ((float)b - (float)n) / 2;
  float n2 = ((float)n + v);
  printf("%.2f %.2f", v, n2);

  return 0;
}
