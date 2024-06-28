// Kod: FR_AA_05
// Link: https://pl.spoj.com/problems/FR_AA_05/

#include <stdio.h>
#include <math.h>

typedef struct Point {
    int x, y;
}Point_t;

float DistancePointPoint(Point_t* start, Point_t* end) {
    return sqrt(pow(((float)start->x - (float)end->x), 2.0)
        + pow((float)start->y - (float)end->y, 2.0));
}

int main() {
    static int a, r, n;
    static int bugs_removed;

    scanf("%d %d", &a, &r);
    scanf("%d", &n);

    Point_t wiper = { a,0 };

    Point_t bug = { 0,0 };

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &bug.x, &bug.y);
        if (DistancePointPoint(&wiper, &bug) <= (float)r)
            bugs_removed++;
    }

    printf("%d\n", n - bugs_removed);

    return 0;
}