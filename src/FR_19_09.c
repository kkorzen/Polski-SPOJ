// Kod: FR_19_09
// Link: https://pl.spoj.com/problems/FR_19_09/

#include <stdio.h>
#include<stdlib.h>

typedef struct Triangle {
  unsigned int a, b, c;
  unsigned int circum;  // circumference - obwod
}Triangle_t;

int cmpfunc(const void* a, const void* b) {
  Triangle_t* t1 = (Triangle_t*)a;
  Triangle_t* t2 = (Triangle_t*)b;

  return   t1->circum - t2->circum ;
}

int main() {
  unsigned int n = 0;
  Triangle_t* t;

  scanf("%u", &n);

  t = (Triangle_t*)malloc(n* sizeof(Triangle_t));

  for (int i = 0;i < n;i++) {
    scanf("%u %u %u", &t[i].a, &t[i].b, &t[i].c);
    t[i].circum = t[i].a + t[i].b + t[i].c;
  }

  qsort(t, n, sizeof(Triangle_t), cmpfunc);

  for (int i = 0;i < (n - 1);i++) {
      if ((t[i].a == t[i + 1].a || t[i].a == t[i + 1].b || t[i].a == t[i + 1].c) &&
        (t[i].b == t[i + 1].a || t[i].b == t[i + 1].b || t[i].b == t[i + 1].c) &&
        (t[i].c == t[i + 1].a || t[i].c == t[i + 1].b || t[i].c == t[i + 1].c)) {
        goto l_success;
      }
  }

  puts("Nie");
  goto l_return;


l_success:
  puts("Tak");
  free(t);

l_return:
  return 0;
}