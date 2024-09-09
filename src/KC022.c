// Kod: KC022
// Link: https://pl.spoj.com/problems/KC022/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool IsInArray(long long int* arr, long long int len, long long int target) {
    if (len == 0) return false;
    for (long long int i = 0; i < len; i++) if (arr[i] == target) return true;
    return false;
}

int cmpfunc(const void* a, const void* b) {
    return *(long long int*)b > *(long long int*)a;
}


int main() {
    char* buff = NULL;
    size_t buff_size;
    size_t line_len;

    long long int* arr = NULL;

    while ((line_len = getline(&buff, &buff_size, stdin)) != -1) {
        long long int target_idx = atoll(strtok(buff, " "));
        if (target_idx <= 0) { puts("-"); continue; }
        char* token = strtok(NULL, " ");

        arr = (long long int*)calloc(0, sizeof(long long int));
        long long int curr_arr_len = 0;

        while (token != NULL) {
            long long int num = atoll(token);
            if (!IsInArray(arr, curr_arr_len, num)) {

                curr_arr_len++;
                arr = (long long int*)realloc(arr, curr_arr_len * sizeof(long long int));
                arr[curr_arr_len - 1] = num;
            }
            token = strtok(NULL, " ");
        }


        qsort(arr, curr_arr_len, sizeof(long long int), cmpfunc);

        if (target_idx <= curr_arr_len && target_idx > 0) printf("%lld\n", arr[target_idx - 1]);
        else puts("-");

        free(arr);
    }

    return 0;
}
