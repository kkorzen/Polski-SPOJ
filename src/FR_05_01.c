// Kod: FR_05_01
// Link: https://pl.spoj.com/problems/FR_05_01/

#include <stdio.h>
#include <string.h>

int DayToNumber(char day[]) {
	if (!strcmp(day, "Pn")) return 0;
	if (!strcmp(day, "Wt")) return 1;
	if (!strcmp(day, "Sr")) return 2;
	if (!strcmp(day, "Cz")) return 3;
	if (!strcmp(day, "Pt")) return 4;
	if (!strcmp(day, "So")) return 5;
	if (!strcmp(day, "Nd")) return 6;
}

char* NumberToDay(unsigned long long n) {
	switch (n) {
	case 0: return "Pn";
	case 1: return "Wt";
	case 2: return "Sr";
	case 3: return "Cz";
	case 4: return "Pt";
	case 5: return "So";
	case 6: return "Nd";
	}
}

void WhatsTheNextDay(char day[], unsigned long long n) {
	int day_number = DayToNumber(day);
	unsigned long long next_day = (unsigned long long)day_number + n;
	printf("%s\n", NumberToDay(next_day % 7L));
}

int main(void) {
	static int d;
	static unsigned long long n;
	static unsigned char day[5];

	scanf("%d", &d);

	while (d--) {
		scanf("%s %llu", day, &n);
		WhatsTheNextDay(day, n);
	}

	return 0;
}
