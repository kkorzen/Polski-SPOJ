// Dyrektywa dla poprawnego dzialania funkcji scanf() w Visual Studio
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
  
char* ReverseStr(char* str) {
	int len = strlen(str);
	char* s = calloc(len + 1, sizeof(char));
	for (int i = 0; i < len; i++)
		s[i] = str[len - i - 1];
	return s;
}
 
bool Is_Palindrome(char* str) {
	if (strcmp(str, ReverseStr(str)) == 0)
		return true;
	return false;
}
 
int* Calc(char* str) {
	int* w = calloc(2, sizeof(int));
	char* s = calloc(strlen(str)+1, 1);
	// free(s) jest zbedne, poniewaz na wyjsciu z 
	// funkcji program sam zwalnia pamiec
 
	strcpy(s, str);
	int cnt = 0;
	int sum = 0;
 
	while (!Is_Palindrome(s)) {
		char* s2 = ReverseStr(s);
		sum += atoi(s) + atoi(s2);
		free(s2);
		sprintf(s, "%d", sum);
		cnt++;
		sum = 0;
	}
 
	w[0] = atoi(s);
	w[1] = cnt;
 
	return w;
}
 
int main() {
 
	int t = 0;
	scanf("%d", &t);
 
	char str[10];
 
	for (int i = 0; i < t; i++) {
		scanf("%s", str);
		int* w = Calc(str);
		printf("%d %d\n", w[0], w[1]);
		free(w);
	}
 
	return 0;
} 
