// Kod: FR_18_03
// Link: https://pl.spoj.com/problems/FR_18_03/

#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void* a, const void *b){
  return *(int*)a - *(int*)b;
}

int main() {
  static int planks[4];

  for(int i=0;i<4;i++)
  scanf("%d", planks+i);

  qsort(planks,4,sizeof(int),cmpfunc);
 
  printf("%d", planks[0]*planks[2]);

  return 0;
}
