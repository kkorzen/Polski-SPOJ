// Kod: FR_19_05
// Link: https://pl.spoj.com/problems/FR_19_05/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define INVALID_INDEX -1

short Find_First(char *str);
short Find_Last(char *str);

int main()
{
    char str[201] = "";
    int t = 0;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%s", str);

        short first_idx = Find_First(str);
        short last_idx = Find_Last(str);

        if(first_idx == INVALID_INDEX || last_idx == INVALID_INDEX || first_idx == last_idx)
            puts("BRAK");
        else
            printf("%c %c\n", str[first_idx], str[last_idx]);

    }

    return 0;
}

short Find_First(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (isdigit(str[i]))
            return i;
    }
    return INVALID_INDEX;
}

short Find_Last(char *str)
{
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
    {
        if (isdigit(str[i]))
            return i;
    }
    return INVALID_INDEX;
}