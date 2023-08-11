// Dyrektywa dla poprawnego dzialnia funkcji scanf() w Visual Studio
#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
 
void modify(char* str) {
	int len = strlen(str);
	int cnt = 1;
	for (int i = 1; i <= len; i++) {
		if (str[i] != str[i - 1]) {
			if (cnt > 2)
				printf("%c%d", str[i - 1], cnt);
			else
				for (int j = 0; j < cnt; j++)
					printf("%c", str[i - 1]);
			cnt = 1;
		}
		else
			cnt++;
	}
}
 
int main() {
	int C = 0;
	scanf("%d", &C);
 
	char str[201];
 
	for (int i = 0; i < C; i++) {
		scanf("%s", str);
		modify(str);
		puts("");
	}
 
	return 0;
} 
