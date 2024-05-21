// Kod: FR_16_03
// Link: https://pl.spoj.com/problems/FR_16_03/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  static char input[53];
  _Bool underscore_detected = 0;

  scanf("%s", input);

  for (int i = 0; i < strlen(input); i++) {
    if (input[i] == '_') {
      underscore_detected = 1;
      continue;
    }
    if (underscore_detected) {
      putc(toupper(input[i]), stdout);
      underscore_detected = 0;
    } else
      putc(input[i], stdout);
  }

  return 0;
}