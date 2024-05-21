// Kod: FR_19_08
// Link: https://pl.spoj.com/problems/FR_19_08/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void Shift_Left_Int(int arr[], int len, int start_idx) {
  for (int i = start_idx; i < len; i++) {
    arr[i - 1] = arr[i];
  }
}
 
void Shift_Left_Char(char arr[], int start_idx) {
  int temp = arr[start_idx];
  for (int i = start_idx + 1; i < strlen(arr); i++) {
    arr[i - 1] = arr[i];
  }
}
 
void PrintArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  puts("");
}
 
int main() {
  int n = 0;
  int *numbers;
  char *symbols;
  int multiply_symbols = 0;
  int sum = 0;
 
  scanf("%d", &n);
 
  numbers = (int *)calloc(n, sizeof(int));
  symbols = (char *)calloc(n, sizeof(char));
 
  for (int i = 0; i < n; i++) {
    scanf("%d", numbers + i);
  }
 
  for (int i = 0; i < n - 1; i++) {
    scanf(" %c", symbols + i);
  }
 
  for (int i = 0; i < n - 1; i++) {
    if (symbols[i] == '*') {
      multiply_symbols++;
    }
  }
 
  for (int i = 0; i < n; i++) {
    if (multiply_symbols > 0) {
      if (symbols[i] == '*') {
        numbers[i] = numbers[i] * numbers[i + 1];
        Shift_Left_Int(numbers, n, i + 2);
        Shift_Left_Char(symbols, i);
        n--;
        symbols[n - 1] = '\0';
        multiply_symbols--;
        i--;
      }
    }
  }
 
  for (int i = 0; i < n - 1; i++) {
    if (symbols[i] == '+') {
      numbers[0] += numbers[i + 1];
    }
    else if (symbols[i] == '-') {
      numbers[0] -= numbers[i + 1];
    }
  }
 
  printf("%d\n", numbers[0]);
 
  free(symbols);
  free(numbers);
 
  return 0;
} 