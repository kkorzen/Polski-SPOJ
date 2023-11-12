/*
    Kod zadania:    FANGEN
    Link:           https://pl.spoj.com/problems/FANGEN/
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void CreateEmpyWindmill(char** windmill, int r) {
    r = abs(r);
    for (int i = 0; i < 2 * r; i++) {
        for (int j = 0; j < 2 * r; j++) {
            windmill[i][j] = '*';
        }
    }
}

void GenerateRightTurnWindmill(char** windmill, int r) {
    // generowanie wiatraczka polega na podzieleniu macierzy na 4 cwiartki
    // a nastepnie zmiana odpowiednich elementow na kropki

    // elementy gdzie (row == col) to elementy lezace na diagonali ( \ ) macierzy
    // elementy gdzie (row == 2*r - 1 - col) to elementy lezace na drugiej diagonali ( / )
    // macierzy

    for (int row = 0; row < 2 * r; row++) {
        for (int col = 0; col < 2 * r; col++) {
            if (row != col && row != 2 * r - 1 - col) {
                // pierwsza cwiartka
                // wstawianie kropki we wszystkie elementy lezace ponizej diagonali ( \ )
                if (row < r && col < r) {
                    if (row > col) windmill[row][col] = '.';
                }
                // second quarter
                // wstawianie kropki we wszystkie elementy lezace powyzej drugiej diagonali ( / )
                if (row < r && col >= r) {
                    if (row < 2 * r - 1 - col) windmill[row][col] = '.';
                }
                // third quarter
                // wstawianie kropki we wszystkie elementy lezace ponizej drugiej diagonali ( / )
                if (row >= r && col < r) {
                    if (row > 2 * r - 1 - col) windmill[row][col] = '.';
                }
                // forth quarter
                // wstawianie kropki we wszystkie elementy lezace powyzej diagonali ( \ )
                if (row >= r && col >= r) {
                    if (row < col) windmill[row][col] = '.';
                }
            }
        }
    }
}

void GenerateLeftTurnWindmill(char** windmill, int r) {
    GenerateRightTurnWindmill(windmill, r);
    // mozna po prostu uzyc fukcji strrev() ze <stirng.h>
    // ale spoj nie rozpoznaje tej funkcji

    /*
        for (int i = 0; i < 2 * r; i++)
            strrev(windmill[i]);
    */

    for (int row = 0; row < 2 * r; row++) {
        for (int col = 0; col < 2 * r; col++) {
            if (row != col && col != 2 * r - 1 - row) {
                if (windmill[row][col] == '.') windmill[row][col] = '*';
                else windmill[row][col] = '.';
            }
        }
    }
}



void GenerateWindmill(char** windmill, int r) {
    if (r > 0) {
        GenerateLeftTurnWindmill(windmill, abs(r));
    }
    if (r < 0) {
        GenerateRightTurnWindmill(windmill, abs(r));
    }
}

void DrawWindmill(char** windmill, int r) {
    r = abs(r);
    for (int i = 0; i < 2 * r; i++) {
        for (int j = 0; j < 2 * r; j++) {
            printf("%c", windmill[i][j]);
        }
        printf("\n");
    }
}

void FreeWindmill(char** windmill, int r) {
    r = abs(r);
    for (int i = 0; i < 2 * r; i++)
        free(windmill[i]);
    free(windmill);

}

int main() {

    unsigned int r = 0;

    while (1) {
        scanf("%d", &r);

        if (r == 0) break;

        int size = 2 * abs(r);

        char** windmill = (char**)malloc(size * sizeof(char*));
        for (int i = 0; i < size; i++) {
            // dodana '1' do size zaklada potraktowanie tablicy windmill[i] jako stringa
            // zatem potrzebne jest dodanie miejsca na znak '\0'
            // niezwykle istotne w przypadku wykorzystania funkcji strrev()
            *(windmill + i) = (char*)malloc((size + 1) * sizeof(char));
        }

        CreateEmpyWindmill(windmill, r);
        GenerateWindmill(windmill, r);
        DrawWindmill(windmill, r);
        FreeWindmill(windmill, r);

        printf("\n");
    }

    return 0;
}
