// Kod: KC015
// Link: https://pl.spoj.com/problems/KC015/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int RemovePreceedingZeroes(char** n) {
    int len = strlen(*n);
    int p;

    /* p is used for eliminating the preceeding zeroes of a number */
    for (int i = 0; i < len; i++) if (*(*n + i) != '0') { p = i; break; }

    /* moving a string pointer to an index of first non-zero (not '0') character */
    *n += p;

    return len - p;
}

bool AreEqual(char* n1, char* n2) {
    int len1 = RemovePreceedingZeroes(&n1);
    int len2 = RemovePreceedingZeroes(&n2);

    if (len1 != len2) return false;

    while (*n1 != 0 && *n2 != 0) {
        if (*n1 != *n2) return false;
        n1++; n2++;
    }

    return true;

}

bool IsGreaterEqualThan(char* n1, char* n2) {
    int len1 = RemovePreceedingZeroes(&n1);
    int len2 = RemovePreceedingZeroes(&n2);

    if (len1 > len2) return true;

    while (*n1 != 0 && *n2 != 0) {
        if (*n1 < *n2) return false;
        n1++; n2++;
    }

    return true;
}

bool IsLessEqualThen(char* n1, char* n2) {
    int len1 = RemovePreceedingZeroes(&n1);
    int len2 = RemovePreceedingZeroes(&n2);

    if (len1 < len2) return true;

    while (*n1 != 0 && *n2 != 0) {
        if (*n1 > *n2) return false;
        n1++; n2++;
    }

    return true;
}

int main() {
    char* line = NULL;
    size_t line_size;
    size_t line_len;

    while ((line_len = getline(&line, &line_size, stdin)) != -1) {
        /* Deletion of (\n) character */
        line[line_len - 1] = '\0';

        char* num1 = strtok(line, " ");
        char* rel = strtok(NULL, " ");
        char* num2 = strtok(NULL, " ");

        if (!strcmp(rel, "==")) printf("%d\n", AreEqual(num1, num2));
        if (!strcmp(rel, "!=")) printf("%d\n", !AreEqual(num1, num2));
        if (!strcmp(rel, "<=")) printf("%d\n", IsLessEqualThen(num1,num2));
        if (!strcmp(rel, ">=")) printf("%d\n", IsGreaterEqualThan(num1, num2));
    }

    return 0;
}
