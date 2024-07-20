// Kod: KC005
// Link: https://pl.spoj.com/problems/KC005/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool CheckNameOrSurname(char* str) {
    if (!isupper(str[0])) return false;
    for (int i = 1; i < strlen(str); i++) {
        if (!isalnum(str[i]) || !islower(str[i])) return false;
    }
    return true;
}

bool CheckDateOfBirth(char* str) {
    int divider_cnt = 0;

    for (int i = 0; i < strlen(str); i++)
        if (str[i] == '-') divider_cnt++;

    if (divider_cnt != 2) return false;

    char* year = strtok(str, "-");
    char* month = strtok(NULL, "-");
    char* day = strtok(NULL, "-");

    if (strlen(year) != 4 || strlen(month) != 2 || strlen(day) != 2) return false;

    for (int i = 0; i < strlen(year); i++)
        if (!isdigit(year[i])) return false;
    for (int i = 0; i < strlen(month); i++)
        if (!isdigit(month[i])) return false;
    for (int i = 0; i < strlen(day); i++)
        if (!isdigit(day[i])) return false;


    int iyear = atoi(year);
    int imonth = atoi(month);
    int iday = atoi(day);

    if (iyear < 1900 || iyear >2000
        || imonth < 1 || imonth > 12
        || iday < 1 || iday > 31) {

        return false;
    }
    return true;
}



int main() {
    char* line = NULL;
    size_t line_size = 0;
    size_t line_len = 0;

    while ((line_len = getline(&line, &line_size, stdin)) != -1) {

        line[line_len - 1] = '\0'; //deletion of (\n)

        strtok(line, " "); char* name = strtok(NULL, " ");
        strtok(NULL, " "); char* surname = strtok(NULL, " ");
        strtok(NULL, " "); strtok(NULL, " "); char* date_of_birth = strtok(NULL, " ");


        name[strlen(name) - 1] = '\0'; // deletion of ';'
        surname[strlen(surname) - 1] = '\0'; // deletion of ';'

        if (!CheckNameOrSurname(name)) {
            puts("0"); continue;
        }

        if (!CheckNameOrSurname(surname)) {
            puts("1"); continue;
        }

        if (!CheckDateOfBirth(date_of_birth)) {
            puts("2"); continue;
        }

        puts("3");
        free(line);
    }

    return 0;
}
