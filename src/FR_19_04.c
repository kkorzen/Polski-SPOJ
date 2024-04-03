// Kod: FR_19_04
// Link: https://pl.spoj.com/problems/FR_19_04/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n = 0;
    char sylab[3] = "";
    char prev_sylab[3] = "";
    bool word_found = false;


    scanf("%d", &n);

    while(n--)
    {
        scanf("%s", sylab);
        if(!strcmp(sylab,"ma") && !strcmp(prev_sylab, "ma") && !word_found)
        {
            puts("mama");
            word_found = true;
        }
        if(!strcmp(sylab,"ta") && !strcmp(prev_sylab, "ta") && !word_found)
        {
            puts("tata");
            word_found = true;
        }
        strcpy(prev_sylab, sylab);
    }

    return 0;
}
