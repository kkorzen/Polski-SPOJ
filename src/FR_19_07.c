// Kod: FR_19_07
// Link: https://pl.spoj.com/problems/FR_19_07/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *emoticons[8] = {":)", ":(", ";)", ":D", ":P", "xD", ":>", "<3"};

bool Is_In_String(char *str, char **pattern);

int main()
{
    int n = 0;
    int m = 0;
    char word[33] = "";
    char *line;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &m);
        // 33*m - m słow kazde po 33 znaki (lacznie z '/0')
        // m - m spacji
        // 1 - znak '/0'
        line = calloc(33*m + m + 1, sizeof(char));

        while(m--)
        {
            scanf("%s", word);
            if(Is_In_String(word,emoticons)==false)
            {
                strcat(line, word);
                strcat(line," ");
            }  
        }
        line[strlen(line)-1] = 0;
        puts(line);
        free(line);
    }

    return 0;
}

bool Is_In_String(char *str, char **pattern)
{
    for (int i = 0; i < 8; i++)
    {
        if (strcmp(str, pattern[i]) == 0)
            return true;
    }
    return false;
}