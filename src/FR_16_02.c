// Kod: FR_16_02
// Link: https://pl.spoj.com/problems/FR_16_02/

#include <stdio.h>
#include <stdlib.h>

int main() {
  static int n, hill_cnt;
  int *arr;

  scanf("%d", &n);
  arr = calloc(n,sizeof(int));


  for(int i=0;i<n;i++){
    scanf("%d", arr+i);

    if(i>=2){
      if(arr[i-2] < arr[i-1] && arr[i-1] > arr[i])
        hill_cnt++;
    }
  }

  printf("%d\n", hill_cnt);

  return 0;
}