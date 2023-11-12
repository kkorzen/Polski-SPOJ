/*
    Kod zadania:    SIGALRM
    Link:           https://pl.spoj.com/problems/SIGALRM/
*/

#include <signal.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h> // Tylko dla systemow UNIX (MacOS, Linux)

volatile sig_atomic_t print_flag = false;

void handle_alarm(int sig) {
    print_flag = true;
}

int main() {
    signal(SIGALRM, handle_alarm);
    alarm(1);
    for (;;) {
        sleep(5);
        if (print_flag) {
            printf("Hello\n");
            print_flag = false;
            alarm(1);
        }
    }
}