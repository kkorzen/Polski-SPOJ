// Kod zadania: ML2_A
// Link: https://pl.spoj.com/problems/ML2_A/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool IsPrime(int n) {
  if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i=3; (i*i)<=n; i+=2){
        if(n % i == 0 ) return false;
    }
    return true;
}

char* FindPrimes(int n) {
  static char str[12];
  //memset(str, 0, strlen(str) - 1);
  for (int i = 1; i <= n-1; i++) {
    if (!IsPrime(i)) continue;
    for (int j = i; j <= n; j++) {
      if (IsPrime(j) && i + j == n) {
        sprintf(str, "TAK %d %d", i, j);
        return str;
      }
    }
  }
  return "NIE";
}

int main() {
  int t = 0;
  int s = 0;
  scanf("%d", &t);

  while (t--) {
    scanf("%d", &s);
    char* str = FindPrimes(s);
    printf("%s\n", str);
  }

  return 0;
}
