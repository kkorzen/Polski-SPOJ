// Kod: AL_13_10
// Link: https://pl.spoj.com/problems/AL_13_10/

#include<stdio.h>
#include<string.h>

_Bool AreStringsValid(char str_1[], char str_2[]) {
	if (strlen(str_1) < strlen(str_2)) return 0;

	int p1 = 0, p2 = 0;
    
	while(str_1[p1] != 0){
		if(str_1[p1]==str_2[p2]) p2++;
		if(p2==strlen(str_2)) return 1;
		p1++;
	}

	return 0;
}

int main(void) {
	static int t;

	static char first_str[1002];
	static char second_str[1002];

	scanf("%d", &t);

	while (t--) {
		scanf("%s", first_str); scanf("%s", second_str);
		if(AreStringsValid(first_str, second_str)) puts("Tak");
		else puts("Nie");
	}

	return 0;
}
