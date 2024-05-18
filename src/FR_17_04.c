// Kod: FR_17_04
// Link: https://pl.spoj.com/problems/FR_17_04/

#define M_PI 3.14159265358979323846

#include <stdio.h>

char *WhichOrder(int nm, int sm, int ng, int sg) {
  int pm = sm*sm;
  int pg = sg*sg;

  if(pm*nm > pg*ng) return "Maciek";
  if(pm*nm < pg*ng) return "Grzesiek";
  if(pm*nm == pg*ng) return "porcje sa takie same";
}

int main() {
  int t = 0;
  int nm, sm, ng, sg;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d %d %d", &nm, &sm, &ng, &sg);
    printf("%s\n", WhichOrder(nm,sm,ng,sg));
  }

  return 0;
}
