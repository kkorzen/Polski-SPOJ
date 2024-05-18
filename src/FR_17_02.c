// Kod: FR_17_02
// Link: https://pl.spoj.com/problems/FR_17_02/

#include <stdio.h>

int main() {
  int m_temperature;
  int g_temperature;
  int mean_temperature;

  scanf("%d %d", &m_temperature, &mean_temperature);

  g_temperature = 2 * mean_temperature - m_temperature;

  if (g_temperature > 30 || g_temperature < 15)
    puts("NIE DA SIE");
  else
    printf("%d\n", g_temperature);

  return 0;
}
