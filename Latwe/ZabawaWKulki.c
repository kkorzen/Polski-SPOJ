// Kod zadania: KULKI
// Link: https://pl.spoj.com/problems/KULKI/

#include <math.h>
#include <stdio.h>
#include <string.h>

typedef struct Point {
    int x;
    int y;
} Point_t;

typedef struct Bowl {
    Point_t center;
    int radius;
} Bowl_t;

float Calc_Distance(Point_t start, Point_t stop) {
    return sqrt(pow(start.x - stop.x, 2) + pow(start.y - stop.y, 2));
}

int main() {
    int number_of_throws;
    Bowl_t bowl;
    int number_of_contestants;

    char name[100];

    char best_player_name[100] = "None";
    int best_player_throws_inside_count = 0;

    Point_t throw;

    scanf("%d %d %d %d", &bowl.center.x, &bowl.center.y, &bowl.radius,
          &number_of_throws);
    scanf("%d", &number_of_contestants);

    while (number_of_contestants--) {
        scanf("%s", name);
        int throws_inside_counter = 0;
        for (int i = 0; i < number_of_throws; i++) {
            scanf("%d %d", &throw.x, &throw.y);
            // z jakiegos poowdu krawedz miski jest rowniez traktowana jako trafienie do jej wnetrza,
            // dlatego w ponizszym warunku nalezy uwzglednic ewentualna rownosc (<=)
            if (Calc_Distance(bowl.center, throw) <= (float)bowl.radius) {
                throws_inside_counter++;
            }
        }
        if(throws_inside_counter > best_player_throws_inside_count){
            best_player_throws_inside_count = throws_inside_counter;
            strcpy(best_player_name, name);
        }
    }

    printf("%s %d\n", best_player_name, best_player_throws_inside_count);

    return 0;
}