#include <stdio.h>
#include <string.h>
#include <ctype.h>

int CharToNumber(char c){
    switch(c){
        case 'A': case 'B': case 'C':
            return 2;
        case 'D': case 'E': case 'F':
            return 3;
        case 'G': case 'H': case 'I':
            return 4;
        case 'J': case 'K': case 'L':
            return 5;
        case 'M': case 'N': case 'O':
            return 6;
        case 'P': case 'Q': case 'R': case 'S':
            return 7;
        case 'T': case 'U': case 'V':
            return 8;
        case 'W': case 'X': case 'Y': case 'Z':
            return 9;
        default:
            return 0;
    }
}

int main(){

    int N = 0;
    char str[21];

    scanf("%d", &N);

    while(N--){
        scanf("%s", str);
        for(int i=0;i<strlen(str);i++){
            printf("%d",toupper(CharToNumber(str[i])));
        }
        puts("");
    }

    return 0;
}