// Kod: SWMP_103
// Link: https://pl.spoj.com/problems/SWMP_103/
	
#include <stdio.h>
#include <math.h>
	
int main(void) {
	static int n;
	static int a;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &a);
		if (a <= 0){
			puts("NIE");
			continue;
		}
		float s = (float)sqrt((double)a);
		if (s - (int)s == 0) puts("TAK");
		else puts("NIE");
	}
	return 0;
}
