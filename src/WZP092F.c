/*
	Kod zadania:	WZP09_2F
	Link:			https://pl.spoj.com/problems/WZP09_2F/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool Check_3(char* num) {
	int len = strlen(num);
	int sum = 0;
	for (int i = 0; i < len; i++) {
		sum += (int)num[i] - 48;
	}
	if (sum % 3 == 0) return true;
	else return false;
}

bool Check_5(char* num) {
	int len = strlen(num);
	if (num[len - 1] == '0' || num[len - 1] == '5')
		return true;
	else return false;
}

/*
Wykorzystane zmienne znakowe char do przechowywania liczb ze wzgledu na wymogi zadania,
ktore zaklada maksymalna dlugosc liczby rowna 1000 cyfr. Taka liczba nie zmiesci sie
w zdanym typie danych liczbowym, dlatego nalezy wykorzystac tablice znakow i analizowac
ciag znak po znaku korzystajac z zasad podzielnosci.
*/


int main() {

	char num[1000];

	while (scanf("%s", num)) {
		if (strcmp(num, "0") == 0) break;
		if (Check_3(num) && Check_5(num))
			printf("TAK\n");
		else printf("NIE\n");
	}

	return 0;
}
