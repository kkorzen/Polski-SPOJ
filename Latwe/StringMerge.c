#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
 
char* string_merge(char* str1, char* str2) {
	int str1_len = strlen(str1);
	int str2_len = strlen(str2);
	int k = 0;
	/* 0 -> str1 is shorter or equal || 1 -> str2  is shorter*/
	bool which_shorter = 0;
 
	if (str1_len > str2_len)
		which_shorter = 1;
 
	char* output;
 
	if (!which_shorter) {
		output = (char*)malloc(2*str1_len + 1);
		for (int i = 0;i < str1_len;i++) {
			output[k] = str1[i];
			output[k + 1] = str2[i];
			k += 2;
		}
	}
	else {
		output = (char*)malloc(2 * str2_len + 1);
		for (int i = 0;i < str2_len;i++) {
			output[k] = str1[i];
			output[k + 1] = str2[i];
			k += 2;
		}
	}
	output[k] = '\0';
	return output;
}
 
int main() {
 
	int t;
	scanf("%d", &t);
 
	char str1[100], str2[100];
 
	for (int i = 0;i < t;i++) {
		scanf("%s %s", str1, str2);
		char* res = string_merge(str1, str2);
		printf("%s\n", res);
  }
  
	return 0;
}
 
 
