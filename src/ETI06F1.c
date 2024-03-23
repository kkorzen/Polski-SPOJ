/*
	Kod zadania:	ETI06F1
	Link:			https://pl.spoj.com/problems/ETI06F1/
*/

#define PI 3.141592654

#include <stdio.h>
#include <math.h>

double Calc_Area(double  r, double d) {
	if (d == 0)
		return PI * r * r;
	if (d == 2 * r)
		return 0.0f;

	double x = sqrt(r * r - d * d / 4);

	return x * x * PI;

}

int main() {

	double r, d;
	scanf("%lf %lf", &r, &d);

	printf("%lf", Calc_Area(r, d));

	return 0;
}
