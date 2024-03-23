// Kod zadania: RODZ_TRO
// Link: https://pl.spoj.com/problems/RODZ_TRO/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum Triangle {
    None = 0,
    Prostokatny,
    Rozwartokatny,
    Ostrokatny
} Triangle_t;

int CompareFunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

Triangle_t CheckTriangle(int* sides) {
   
    qsort(sides, 3,sizeof(int), CompareFunc);

    if (sides[2] >= sides[0] + sides[1]) {
        return None;
    }
    if (sides[2]*sides[2] == sides[1]*sides[1] + sides[0]*sides[0]) {
        return Prostokatny;
    }
    if (sides[2]*sides[2] > sides[1]*sides[1] + sides[0]*sides[0]) {
        return Rozwartokatny;
    }
    return Ostrokatny;
}

void GetTriangleSidesFromString(int sides[], char* str) {
    char* token;
    token = strtok(str," ");
    sides[0] = atoi(token);
    token = strtok(NULL," ");
    sides[1] = atoi(token);
    token = strtok(NULL," ");
    sides[2] = atoi(token);
}

void PrintTriangleType(Triangle_t t) {
    switch (t) {
        case None:
            printf("brak\n");
            break;
        case Prostokatny:
            printf("prostokatny\n");
            break;
        case Rozwartokatny:
            printf("rozwartokatny\n");
            break;
        case Ostrokatny:
            printf("ostrokatny\n");
            break;
    }
}

int main() {
    int sides[3] = {0,0,0};
    char str[20];

    while (fgets(str, 20, stdin) != NULL) {
        GetTriangleSidesFromString(sides, str);        
        PrintTriangleType(CheckTriangle(sides));
    }

    return 0;
}