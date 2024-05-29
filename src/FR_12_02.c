// Kod: FR_12_02.c
// Link: https://pl.spoj.com/problems/FR_12_02/

#include <stdio.h>

int main(){
	static char c1,c2;
	static int n1,n2;

	scanf("%c%d %c%d", &c1, &n1, &c2, &n2);

	if(c1==c2 || n1==n2) puts("\nTAK");
	else puts("\nNIE");

	return 0;
}
