// Kod: FR_17_03
// Link: https://pl.spoj.com/problems/FR_17_03/

#include <stdio.h>

int main() {
  int g, m;
  scanf("%d %d", &g, &m);

  int max = (g > m) ? g : m;

  for (int i = max; i >= 0; i--) {
    if (g == m && i == g)
      putc('2', stdout);
    else if (g != m && (i == g || i == m))
      putc('1', stdout);
    else
      putc('0', stdout);
  }

  return 0;
}
