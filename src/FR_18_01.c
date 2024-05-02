// Kod: FR_18_01
// Link: https://pl.spoj.com/problems/FR_18_01/

#include <stdio.h>

char* Func(int n){
  int x = (n-1)/7;
  if(x==0 || x==6) return "DAWID";
  if(x==1 || x==7) return "GRZESIEK";
  if(x==2 || x==8) return "MACIEK";
  if(x==3 || x==9) return "MARCIN";
  if(x==4 || x==10) return "MARIUSZ";
  if(x==5 || x==11) return "RAFAL";
}

int main() {

  int t = 0;
  int n = 0;

  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);
    printf("%s\n", Func(n));
  }

  return 0;
}
