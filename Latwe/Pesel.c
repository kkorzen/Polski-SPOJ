#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
 
void Str_To_Int_Array(char* str,int* arr) {
	int len = strlen(str);
	for (int i = 0;i < len;i++) {
		arr[i] = str[i]-48;
	}
}
 
bool Check_PESEL(int* arr) {
	int sum = 0;
	char w;
 
	for (int i = 1;i <= 11;i++) {
		switch (i) {
		case 1: case 5: case 9: case 11:
			w = 1;
			break;
		case 2: case 6: case 10:
			w = 3;
			break;
		case 3: case 7:
			w = 7;
			break;
		case 4: case 8:
			w = 9;
			break;
		default: break;
		}
 
		sum += w * arr[i-1];
	}
 
	if (sum%10 == 0) {
		return true;
	}
 
	return false;
}
 
int main() {
	int t;
	scanf("%d", &t);
 
	char str_pesel[12];
	int int_pesel[11];
	
	for (int i = 0;i < t;i++) {
		scanf("%s", str_pesel);
		Str_To_Int_Array(str_pesel, int_pesel);
		if (Check_PESEL(int_pesel))
			puts("D");
		else
			puts("N");
	}
 
	return 0;
} 
