// Kod: FR_19_03
// Link: https://pl.spoj.com/problems/FR_19_03/

#include <stdio.h>
#include <stdlib.h>

void swap(int arr[], int idx_1, int idx_2);
void PrintArray(int arr[], int n);

int main() {
  int number_of_cups = 0;
  int amount_of_cup_changes = 0;
  int *cups;
  int idx1 = 0, idx2 = 0;

  scanf("%d", &number_of_cups);
  scanf("%d", &amount_of_cup_changes);

  cups = (int *)calloc(number_of_cups, sizeof(int));

  for (int i = 0; i < number_of_cups; i++) {
    cups[i] = i + 1;
  }

  //PrintArray(cups, number_of_cups);

  
  while (amount_of_cup_changes--) {
    scanf("%d %d", &idx1, &idx2);
    swap(cups, idx1-1, idx2-1);
  }
  
  PrintArray(cups, number_of_cups);

  free(cups);
  return 0;
}

void swap(int *arr, int idx1, int idx2) {
  int temp = arr[idx1];
  arr[idx1] = arr[idx2];
  arr[idx2] = temp;
}

void PrintArray(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}
