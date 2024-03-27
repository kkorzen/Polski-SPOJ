// Kod: FR_08_05
// Link: https://pl.spoj.com/problems/FR_08_05/

#include <stdio.h>
#include <stdlib.h>

char *Color_Identify(int r, int g, int b);

int main()
{
    char *colour;
    int n = 0, r = 0, g = 0, b = 0;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d %d", &r, &g, &b);
        colour = Color_Identify(r,g,b);
        printf("%s\n", colour);
        free(colour);
    }

    return 0;
}

char *Color_Identify(int r, int g, int b)
{
    char *colour;
    colour = calloc(10, sizeof(char));

    sprintf(colour, "#%02X%02X%02X", r,g,b);

    if (r == 0x00 && g == 0x00 && b == 0x00)
        sprintf(colour, "black");
    if (r == 0xC0 && g == 0xC0 && b == 0xC0)
        sprintf(colour, "silver");
    if (r == 0x80 && g == 0x80 && b == 0x80)
        sprintf(colour, "gray");
    if (r == 0xFF && g == 0xFF && b == 0xFF)
        sprintf(colour, "white");
    if (r == 0x80 && g == 0x00 && b == 0x00)
        sprintf(colour, "maroon");
    if (r == 0xFF && g == 0x00 && b == 0x00)
        sprintf(colour, "red");
    if (r == 0x80 && g == 0x00 && b == 0x80)
        sprintf(colour, "purple");
    if (r == 0xFF && g == 0x00 && b == 0xFF)
        sprintf(colour, "fuchsia");
    if (r == 0x00 && g == 0x80 && b == 0x00)
        sprintf(colour, "green");
    if (r == 0x00 && g == 0xFF && b == 0x00)
        sprintf(colour, "lime");
    if (r == 0x80 && g == 0x80 && b == 0x00)
        sprintf(colour, "olive");
    if (r == 0xFF && g == 0xFF && b == 0x00)
        sprintf(colour, "yellow");
    if (r == 0x00 && g == 0x00 && b == 0x80)
        sprintf(colour, "navy");
    if (r == 0x00 && g == 0x00 && b == 0xFF)
        sprintf(colour, "blue");
    if (r == 0x00 && g == 0x80 && b == 0x80)
        sprintf(colour, "teal");
    if (r == 0x00 && g == 0xFF && b == 0xFF)
        sprintf(colour, "aqua");

    return colour;
}