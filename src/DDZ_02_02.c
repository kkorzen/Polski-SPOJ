// Kod: DDZ_02_02
// Link: https://pl.spoj.com/problems/DDZ_02_02/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char output[1001];
    char command[7];
    char operand;
    int n = 0;
    int idx = 0;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%s %c", command, &operand);

        if(!strcmp(command, "DODAJ"))
        {
            if(idx >= 0)
            {
                output[idx] = operand;
                idx++;
            }
        }
        if(!strcmp(command,"USUN"))
        {
            if(idx > (operand - 48 - 1))
            {
                for(int i=0;i<(operand-48);i++)
                {
                    idx--;
                    output[idx] = '\0';
                }
            }
            else
            {
                memset(output,0,strlen(output));
                idx = 0;
            }
        }
        if(!strcmp(command, "ZAMIEN"))
        {
            if(idx > 0)
            {
                idx--;
                output[idx] = operand;
                idx++;
            }
        }
    }

    puts(output);

    return 0;
}