// Kod: FR_10_02
// Link: https://pl.spoj.com/problems/FR_10_02/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

_Bool IsLetterInArray(char arr[], char c, int len){
	for(int i=0;i<len;i++){
		if(arr[i] == c) return 1;
	}
	return 0;
}

int main(void) {
	static int k;
	char* letters;
	static char str[1001];

	scanf("%d", &k);
	letters = (char*)calloc(k, sizeof(char));

	for(int i=0;i<k;i++){
		scanf(" %c", &letters[i]);
	}

	fflush(stdin);
	// fgets() z jakiegos powodu nie jeste akceptowany przez SPOJA
	scanf("%s", str);

	for(int i=0;i<strlen(str);i++){
		putc(str[i], stdout);
		if(IsLetterInArray(letters, str[i], k)) putc(str[i], stdout);
	}

	putc('\n', stdout);

	return 0;
}
