// Dyrektywa dla poprawnego dzialnia funkcji scanf() w Visual Studio
#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
 
int main() {
 
	int t, n, x;
	int sum = 0;
 
	scanf("%d", &t);
 
	for (int i = 0;i < t;i++) {
		scanf("%d", &n);
		for (int j = 0;j < n;j++) {
			scanf("%d", &x);
			sum += x;
		}
		printf("%d\n\n", sum);
		sum = 0;
	}
 
	return 0;
}
