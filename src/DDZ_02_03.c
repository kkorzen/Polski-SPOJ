// Kod: DDZ_02_03
// Link: https://pl.spoj.com/problems/DDZ_02_03/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define LINE_SIZE 1000001
#define INVALID_INDEX -1

int find_first_elem(char *arr, char c);
int find_last_elem(char *arr, char c);

int main()
{
    char line[LINE_SIZE] = "";
    int first_zero_idx = 0;
    int last_one_idx = 0;
    bool is_zero_found = false;
    int len = 0;

    fgets(line, LINE_SIZE, stdin);

    len = strlen(line);

    first_zero_idx = find_first_elem(line, '0');
    last_one_idx = find_last_elem(line, '1');

    if (first_zero_idx != INVALID_INDEX && last_one_idx != INVALID_INDEX && first_zero_idx + 1 != last_one_idx)
    {
        for (int i = first_zero_idx + 1; i < last_one_idx; i++)
        {
            printf("%c", line[i]);
        }
        printf("\n");
    }
    else
    {
        puts("PUSTY");
    }

    return 0;
}

int find_first_elem(char *arr, char c)
{
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == c)
            return i;
    }
    return INVALID_INDEX;
}

int find_last_elem(char *arr, char c)
{
    for (int i = strlen(arr) - 1; i >= 0; i--)
    {
        if (arr[i] == c)
            return i;
    }
    return -1;
}