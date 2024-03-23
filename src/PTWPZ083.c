#include <stdio.h>
#include <string.h>
#include <ctype.h>

int CharToInt(char c);
int Calculate(char _str[]);

int main(){

    int N = 0;
    int sum = 0;
    char str[100];

    scanf("%d", &N);

    while(N--){
        scanf("%s", str);
        printf("%d\n", Calculate(str));
        sum = 0;
    }

    return 0;
}

int CharToInt(char c){
    return (c-48);
}

int Calculate(char _str[]){
    int sum = CharToInt(_str[0]);
    for(int i=0;i<strlen(_str);i++){
        if(i!=strlen(_str)-1){
            if(_str[i] =='+') sum += CharToInt(_str[i+1]);
            if(_str[i] =='-') sum -= CharToInt(_str[i+1]);
        }
    }
    return sum;
}