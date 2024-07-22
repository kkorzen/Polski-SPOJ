// Kod: SUDOKUC
// Link: https://pl.spoj.com/problems/SUDOKUC/

#include <stdio.h>
#include <stdbool.h>

typedef struct Pointer {
    int x, y;
}Pointer_t;

bool CheckArray(int arr[]) {
    for (int i = 0; i < 9; i++)
        if (arr[i] != 1) return false;
    return true;
}

void ScanGrid(int grid[9][9]) {
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            scanf("%d", &grid[i][j]);
}

void PrintGrid(int grid[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

void ResetGrid(int grid[9][9]) {
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            grid[i][j] = 0;
}

bool CheckRange(int grid[9][9]) {
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            if (grid[i][j] < 1 || grid[i][j] > 9) return false;
    return true;
}

bool CheckRow(int grid[9][9]) {
    for (int i = 0; i < 9; i++) {
        int arr[9] = { 0,0,0,0,0,0,0,0,0 };
        for (int j = 0; j < 9; j++) {
            arr[grid[i][j]-1]++;
        }
        if (CheckArray(arr) == false) return false;
    }
    return true;
}

bool CheckCollumn(int grid[9][9]) {
    for (int i = 0; i < 9; i++) {
        int arr[9] = { 0,0,0,0,0,0,0,0,0 };
        for (int j = 0; j < 9; j++) {
            arr[grid[j][i]-1]++;
        }
        if (CheckArray(arr) == false) return false;
    }
    return true;
}

bool CheckSquare(int grid[9][9]) {
    Pointer_t pointer = { 0,0 };
    while (pointer.x != 9 && pointer.y != 9) {
        int arr[9] = { 0,0,0,0,0,0,0,0,0 };
        for (int i = pointer.x; i < pointer.x + 3; i++) {
            for (int j = pointer.y; j < pointer.y + 3; j++) {
                arr[grid[i][j]-1]++;
            }
        }
        if (CheckArray(arr) == false) return false;
        pointer.x += 3; pointer.y += 3;
    }
    return true;
}

bool CheckGrid(int grid[9][9]) {
    return CheckRange(grid) && CheckRow(grid) && CheckCollumn(grid) && CheckSquare(grid);
}

int main() {
    static int grid[9][9];
    static int n;

    scanf("%d", &n);

    while (n--) {
        ScanGrid(grid);
        if (CheckGrid(grid)) puts("TAK");
        else puts("NIE");
        ResetGrid(grid);
    }

    return 0;
}
