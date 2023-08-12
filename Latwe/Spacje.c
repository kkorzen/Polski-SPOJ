#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    char str[200];
 
    while (fgets(str,200,stdin))
    {
        int len = strlen(str);
        for (unsigned int i = 0; i < len; i++)
        {
            if (isspace(str[i]))
            {
                str[i] = 0;
                str[i + 1] = toupper(str[i + 1]);
            }
        }
        for (unsigned int i = 0; i < len; i++)
        {
            if (str[i] != 0)
            {
                printf("%c", str[i]);
            }
        }
        puts("");
    }
 
    return 0;
}
