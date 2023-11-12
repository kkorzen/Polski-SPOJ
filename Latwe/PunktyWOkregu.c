/*
	Kod zadania:	PICIRC
	Link:			https://pl.spoj.com/problems/PICIRC/
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	int xo, yo, r;
}Circle;


void Check(Circle c, int xp, int yp) {
	double dist = sqrt(pow((c.xo - xp), 2) + pow((c.yo - yp), 2));
	//printf("%f -- ", dist);
	if (dist < (double)c.r) printf("I\n");
	if (dist == (double)c.r) printf("E\n");
	if (dist > (double)c.r) printf("O\n");
}

int main() {
	Circle c;
	int n;
	int xp, yp;

	scanf("%d %d %d", &c.xo, &c.yo, &c.r);
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &xp, &yp);
		Check(c, xp, yp);
	}

	return 0;
}
