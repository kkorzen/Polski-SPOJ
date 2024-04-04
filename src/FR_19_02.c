// Kod: FR_19_02
// Link: https://pl.spoj.com/problems/FR_19_02/

#include <stdio.h>
#include <string.h>

int main()
{
    char symbol[7] = "";

    fgets(symbol, 7, stdin);

    if(!strcmp(symbol,"papier"))
        puts("nozyce");
    else if(!strcmp(symbol,"nozyce"))
        puts("kamien");
    else if(!strcmp(symbol,"kamien"))
        puts("papier");
    else
        puts("przegrales");

    return 0;
}