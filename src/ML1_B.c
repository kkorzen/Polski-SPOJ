// Kod: ML1_B
// Link: https://pl.spoj.com/problems/ML1_B/

#include <stdio.h>
#include <string.h>

int main() {
    int loopCounter = 0;
    int maxLoopCounter = 0;
    char line[13];
    int k = 0;

    scanf("%d", &k);

    while (k--) {
        fgets(line, 13, stdin);
        line[strlen(line) - 1] = 0;

        if (!strcmp(line, "for")) {
            loopCounter++;
        }
        if (loopCounter > maxLoopCounter) {
            maxLoopCounter = loopCounter;
        }
        if (!strcmp(line, "end")) {
            loopCounter--;
        }
    }

    if(maxLoopCounter == 0) printf("O(1)\n");
    if(maxLoopCounter == 1) printf("O(n)\n");
    if(maxLoopCounter > 1) printf("O(n^%d)\n", maxLoopCounter);

    return 0;
}
