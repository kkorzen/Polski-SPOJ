#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
 
void printfloat(float f)
{
    unsigned char* p = (unsigned char*)&f;
    
    // Za posrednictwem wskaznika p, dostajemy sie do kazdego z czterech bajtow floata
    // Windows korzysta z notacji little endiad dlatego numeracja "w tyl"
    for (int i = sizeof(float) - 1; i >=0;i--) {
        printf("%x ", *(p + i));
    }
}
 
int main()
{
    int t;
    float x;
    scanf("%d", &t);
 
    for (int i = 0;i < t;i++) {
        scanf("%f", &x);
        printfloat(x);
    }
 
    return 0;
} 
