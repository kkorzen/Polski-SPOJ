// Kod: FR_14_01
// Link: https://pl.spoj.com/problems/FR_14_01/

#include <stdio.h>

int main() {
  static int green_lamps, red_lamps, damaged_lamps;
  _Bool chain = 0; // 1 -> longer_chain | 0 -> shorter_chain

  scanf("%d %d %d", &green_lamps, &red_lamps, &damaged_lamps);

  int longer_chain = (green_lamps > red_lamps) ? green_lamps : red_lamps;
  int shorter_chain = (green_lamps < red_lamps) ? green_lamps : red_lamps;

  while (damaged_lamps != 0) {
    if (longer_chain > shorter_chain) {
      longer_chain--;
    }
    else {
      if (!chain)
        shorter_chain--;
      else
        longer_chain--;
      chain = !chain;
    }
    damaged_lamps--;
    //printf("%d-%d-%d\n", longer_chain, shorter_chain, damaged_lamps);
  }
  shorter_chain = (shorter_chain < longer_chain) ? shorter_chain : longer_chain;
  printf("%d", 2 * shorter_chain);

  return 0;
}