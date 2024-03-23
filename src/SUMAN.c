#include <stdio.h>

int Calc(int n);

int main(){
    int N = 10;
    int n = 0;
    while(N--){
        scanf("%d", &n);
        printf("%d\n", Calc(n));
    }
    return 0;
}

int Calc(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}