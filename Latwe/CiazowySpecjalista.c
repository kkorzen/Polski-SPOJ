#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
	int D = 0;
	float X = 0, Y = 0, Z = 0;
	float wiek_matki, wiek_dziecka;

	scanf("%d", &D);

	/*
	Skad wzor?
	m -> wiek matki | d -> wiek dziecka

	m = d + X
	m + Y = (d + Y) * Z

	d + X + Y = d*Z + Y*Z

	d * (1 - Z) = Y*Z - X - Y

	d = (Y*Z - X - Y)/(1-Z)

	Wynik ujemny? To znaczy, że dziecko urodzi się za ...
	*/

	while (D--) {
		scanf("%f %f %f", &X, &Y, &Z);
		wiek_dziecka = (Y * Z - X - Y) / (1 - Z);
		//wiek_matki = wiek_dziecka + X;
		//printf("\nMatka: %.2f lat\n", wiek_matki);
		//printf("\Dziecko: %.2f lat\n", wiek_dziecka);
		int miesiace = (int)fabs(round(wiek_dziecka * 12));
		printf("%d\n", miesiace);
	}

	return 0;
}
