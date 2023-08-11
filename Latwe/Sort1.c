#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
typedef struct {
	char name[11];
	int x, y;
}Point;
 
typedef struct {
	Point points[2];
}Segment;
 
float SegmentLength(Segment s) {
	float x1_f = (float)s.points[0].x;
	float y1_f = (float)s.points[0].y;
	float x2_f = (float)s.points[1].x;
	float y2_f = (float)s.points[1].y;
 
	return sqrt(pow((x2_f - x1_f), 2) + pow((y2_f - y1_f), 2));
}
 
void SortSegments(Segment* s, int N) {
	Segment temp;;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N - i - 1;j++) {
			if (SegmentLength(s[j]) > SegmentLength(s[j+1])) {
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		}
	}
}
 
int main() {
	const Point zero = { "zero", 0,0 };
 
	int n;
	Point* p;
	Segment* s;
 
	int t;
	scanf("%d", &t);
	for (int i = 0;i < t;i++) {
		scanf("%d", &n);
		p = malloc(n * sizeof(Point));
		s = malloc(n * sizeof(Segment));
		for (int j = 0;j < n;j++) {
			scanf("%s %d %d", p[j].name, &p[j].x, &p[j].y);
			s[j].points[0] = zero;
			s[j].points[1] = p[j];
		}
		SortSegments(s, n);
		for (int j = 0;j < n;j++) {
			printf("%s %d %d\n", s[j].points[1].name, s[j].points[1].x, s[j].points[1].y);
		}
		printf("\n");
		free(p);
		free(s);
	}
 
	return 0;
} 
