// Kod: AL_28_01
// Link: https://pl.spoj.com/problems/AL_28_01/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char* S = 0;
	int N = 0;

	scanf("%d", &N);
	S = (char*)calloc(N + 1, sizeof(char));

	scanf("%s", S);

	int len = strlen(S);
	int half_len = len / 2;

	int p = half_len, q = half_len;

	for (int i = 0;i < half_len + 1;i++) {
		for (int j = 0;j < len;j++) {
			if(j>=p && j <=q){
				printf("%c", S[j]);
			}
			else{
				printf(".");
			}
		}
		p--;q++;
		puts("");
	}

	free(S);

	return 0;
}
