// Kod: FR_19_10
// Link: https://pl.spoj.com/problems/FR_19_10/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool Check_Bool_Array(bool arr[], int N);
int Scan_For_Pattern(char *_text, char *_pattern);

#define NO_MATCH_FOUND -1

int main()
{
    char text[2048] = "";
    char pattern[2048] = "";

    scanf("%s", text);
    scanf("%s", pattern);

    int result = Scan_For_Pattern(text, pattern);

    if (result != NO_MATCH_FOUND)
        printf("%d\n", result + 1);
    else
        puts("brak");

    return 0;
}

bool Check_Bool_Array(bool arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == false)
            return false;
    }
    return true;
}

int Scan_For_Pattern(char *_text, char *_pattern)
{
    int text_len = strlen(_text);
    int pattern_len = strlen(_pattern);
    int pattern_iterator = 0;
    int index_of_first_matching_element = NO_MATCH_FOUND;
    bool *is_letter_ok = calloc(pattern_len, sizeof(bool));

    for (int i = 0; i < text_len; i++)
    {
        if (_text[i] == _pattern[0])
        {
            index_of_first_matching_element = i;
            is_letter_ok[0] = true;

            for (int j = 1; j < pattern_len; j++)
            {
                if (_pattern[j] == _text[i + 2 * j])
                {
                    is_letter_ok[j] = true;
                }
            }

            if (Check_Bool_Array(is_letter_ok, pattern_len) == true)
                break;
        }
    }

    if (Check_Bool_Array(is_letter_ok, pattern_len) == false)
        index_of_first_matching_element = NO_MATCH_FOUND;

    free(is_letter_ok);
    return index_of_first_matching_element;
}