// Kod: FR_17_05
// Link: https://pl.spoj.com/problems/FR_17_05/

#define OFFSET 4

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  char str[1006];
  char output[1007] = "DDDD";
  bool coding_to_DG = false; // 0/1 -> D/G

  fgets(str, sizeof(str), stdin);
  str[strlen(str) - 1] = '\0'; //'\n' deletion

  if (str[0] == '0' || str[0] == '1') coding_to_DG = true;

  if (coding_to_DG) {
    for (int i = 0;i < strlen(str);i++) {
      if (str[i] == '1') {
        if (output[i - 1 + OFFSET] == 'D') output[i + 4] = 'G';
        else output[i + OFFSET] = 'D';
      }
      else output[i + OFFSET] = output[i - 1 + OFFSET];
    }
    printf("%s\n", output);
  }
  else {
    for (int i = 4;i < strlen(str);i++) {
      if (str[i] != str[i - 1]) putc('1', stdout);
      else putc('0', stdout);
    }
  }

  return 0;
}