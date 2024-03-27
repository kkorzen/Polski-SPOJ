// Kod: DDZ5
// Link: https://pl.spoj.com/problems/DDZ5/

#include <stdio.h>
#include <stdbool.h>

void Print_Array(int arr[], int len);
void Shift_Left(int arr[], int len);

int main()
{
    int n;
    int arr[3] = {0, 0, 0};
    int cnt = 0;

    scanf("%d", &n);

    int i = 0;

    while (n--)
    {
        scanf("%d", arr + 2);

        if (i >= 2)
        {
            if (arr[2] == arr[1] + arr[0])
                cnt++;
        }
        else{
            i++;
        }
        Shift_Left(arr,3);
    }
    printf("%d\n", cnt);

    return 0;
}

void Shift_Left(int arr[], int len)
{
    int temp = arr[0];
    for (int i = 1; i < len; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[len - 1] = temp;
}
