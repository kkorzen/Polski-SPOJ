/*
	Kod zadania:	SKARBFI
	Link:			https://pl.spoj.com/problems/SKARBFI/
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
	int x, y;
}Point;

/*
0 -> N
1 -> S
2 -> W
3 -> E
*/

void PrintInstruction(Point p) {
	if (p.y != 0) {
		if (p.y > 0) printf("0 %d\n", abs(p.y));
		else printf("1 %d", p.y);
	}
	if (p.x != 0) {
		if (p.x > 0) printf("3 %d\n", abs(p.x));
		else printf("2 %d\n", abs(p.x));
	}
	if (p.x == 0 && p.y == 0) printf("studnia\n");
}

int main() {
	const Point well = { 0,0 };
	Point pos = well;
	int D, N, a, b;

	/*
	a -> kierunek
	b -> liczba krokow
	*/

	scanf("%d", &D);
	for (int i = 0; i < D; i++) {
		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			scanf("%d %d", &a, &b);
			switch (a) {
			case 0: pos.y += b; break;
			case 1: pos.y -= b; break;
			case 2: pos.x -= b; break;
			case 3: pos.x += b; break;
			}
		}
		PrintInstruction(pos);
		pos = well;
	}

	return 0;
}
