// Kod: WWO_01_01
// Link: https://pl.spoj.com/problems/WWO_01_01/

#include <stdio.h>
#include <string.h>

int main() {
    int a, b, c = 0;
    char name[10] = "";
    int girls = 0, boys = 0;

    scanf("%d %d %d", &a, &b, &c);

    int x = a + b + c;

    while (x--) {
        scanf("%s", name);
        if (name[strlen(name) - 1] == 'a') girls++;
        else boys++;
    }

    printf("%d\n", (boys < girls) ? boys : girls);

    return 0;
}