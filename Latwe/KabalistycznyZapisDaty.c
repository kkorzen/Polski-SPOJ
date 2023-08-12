#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
int Kabal(char c) {
	switch (tolower(c)) {
	case 'a': return 1; break;
	case 'b': return 2; break;
	case 'c': return 31; break;
	case 'd': return 4; break;
	case 'e': return 5; break;
	case 'f': return 6; break;
	case 'g': return 7; break;
	case 'h': return 8; break;
	case 'i': return 9; break;
	case 'j': return 0; break;
	case 'k': return 10; break;
	case 'l': return 20; break;
	case 'm': return 30; break;
	case 'n': return 40; break;
	case 'o': return 50; break;
	case 'p': return 60; break;
	case 'q': return 70; break;
	case 'r': return 80; break;
	case 's': return 90; break;
	case 't': return 100; break;
	case 'u': return 0; break;
	case 'v': return 200; break;
	case 'w': return 0; break;
	case 'x': return 300; break;
	case 'y': return 400; break;
	case 'z': return 500; break;
	default: return 0;
	}
}
 
int main() {
	char str[26];
	int sum = 0;
 
	scanf("%s", str);
	int len = strlen(str);
	
	for (int i = 0;i < len;i++) {
		sum += Kabal(str[i]);
	}
	printf("%d", sum);
 
	return 0;
} 
