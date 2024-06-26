    // Kod: FR_07_05
    // Link: https://pl.spoj.com/problems/FR_07_05/
     
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <math.h>
     
    int HexToDec(char c) {
        switch (c) {
            case '0': return 0;
            case '1': return 1;
            case '2': return 2;
            case '3': return 3;
            case '4': return 4;
            case '5': return 5;
            case '6': return 6;
            case '7': return 7;
            case '8': return 8;
            case '9': return 9;
            case 'A': case 'a': return 10;
            case 'B': case 'b': return 11;
            case 'C': case 'c': return 12;
            case 'D': case 'd': return 13;
            case 'E': case 'e': return 14;
            case 'F': case 'f': return 15;
        }
    }
     
    int HexStringToDecInt(char *s) {
        int res = 0;
        int len = strlen(s);
        int pointer = len - 1;
        for (int i = 0; i < strlen(s); i++) {
            res += HexToDec(s[pointer]) * pow(16, i);
            pointer--;
        }
        return res;
    }
     
    char *TrimmString(char *s, int p, int q) {
        char *res = calloc(strlen(s) + 1, sizeof(char));
        int idx = 0;
        for (int i = p; i < q; i++) {
            res[idx] = s[i];
            idx++;
        }
        return res;
    }
     
    int Index3DTo1D (int x, int y, int z, int xSize, int ySize, int zSize) {
        return x + y * xSize + z * xSize * ySize;
    }
     
     
    int main() {
        static int x, y, t;
        static int cnt;
        static char color[8];
        static char color_without_hash[7];
        int *arr;
     
        scanf("%d %d", &x, &y);
     
        arr = calloc(x * y * 3, sizeof(int));
     
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                scanf("%s", color);
                strcpy(color_without_hash, color + 1);
     
                for (int k = 0; k < 3; k++) {
                    char *color_trimmed = (TrimmString(color_without_hash, 2 * k, 2 * k + 2));;
                    arr[Index3DTo1D(j,i,k,x,y,3)] = HexStringToDecInt((color_trimmed));
                    free(color_trimmed);
                }
            }
        }
     
        
     
        scanf("%d", &t);
     
        while (t--) {
            cnt = 0;
            for (int i = 0; i < y; i++) {
                for (int j = 0; j < x; j++) {
                    scanf("%s", color);
                    strcpy(color_without_hash, color + 1);
     
                    char *red = TrimmString(color_without_hash, 0, 2);
                    char *green = TrimmString(color_without_hash, 2, 4);
                    char *blue = TrimmString(color_without_hash, 4, 6);
     
                    int r = HexStringToDecInt(red); free(red);
                    int g = HexStringToDecInt(green); free(green);
                    int b = HexStringToDecInt(blue); free(blue);
     
                    int sum = abs(r - arr[Index3DTo1D(j,i,0,x,y,3)]) + abs(g - arr[Index3DTo1D(j,i,1,x,y,3)]) + abs(b - arr[Index3DTo1D(j,i,2,x,y,3)]);
     
                    if (sum <= 5) cnt++;
                }
            }
     
            float ratio = (float)cnt / (float)(x * y);
     
            printf("%.2f\n", ratio);
        }
     
        free(arr);
     
        return 0;
    } 
