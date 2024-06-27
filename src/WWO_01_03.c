// Kod: WWO_01_03
// Link: https://pl.spoj.com/problems/WWO_01_03/

#include <stdio.h>
#include <stdlib.h>

typedef struct Car {
    int velocity;
    int distance_to_finish;
    float time_to_finish;
} Car_t;

float CalculateTimeToFinish(Car_t* car) {
    car->time_to_finish = (float)car->distance_to_finish / (float)car->velocity;
}

int main() {
    static int n, k;
    static int cars_passed, passed_by_cars;

    scanf("%d", &n);

    Car_t* cars = calloc(n, sizeof(Car_t));

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &(cars[i].distance_to_finish), &(cars[i].velocity));
        CalculateTimeToFinish(&cars[i]);
    }

    scanf("%d", &k);

    (k > 0) ? k-- : k;

    for (int i = 0; i < n; i++) {
        if (i != (k)) {
            if (cars[k].time_to_finish > cars[i].time_to_finish
                && cars[k].distance_to_finish < cars[i].distance_to_finish) passed_by_cars++;

            if (cars[k].time_to_finish < cars[i].time_to_finish
                && cars[k].distance_to_finish > cars[i].distance_to_finish) cars_passed++;
        }
    }

    printf("%d %d\n", cars_passed, passed_by_cars);

    return 0;
}