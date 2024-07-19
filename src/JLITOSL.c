// Kod: JLITOSL
// Link: https://pl.spoj.com/problems/JLITOSL/

#include <stdio.h>
#include <string.h>

// =============================================================

char* units[] = { "", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec" };
char* tens[] = { "", "dziesiec", "jedenascie", "dwanascie", "trzynascie", "czternascie", "pietnascie", "szesnascie",
                "siedemnascie", "osiemnascie", "dziewietnascie" };
char* twenties_plus[] = { "", "dziesiec", "dwadziescia", "trzydziesci", "czterdziesci", "piecdziesiat",
                        "szescdziesiat", "siedemdziesiat", "osiemdziesiat", "dziewiecdziesiat" };
char* hundreds[] = { "", "sto", "dwiescie", "trzysta", "czterysta", "piecset", "szescset", "siedemset", "osiemset", "dziewiecset" };
char* shortcuts[] = { "", "tys.", "mln.", "mld.", "bln." };

// =============================================================

int CharToInt(char c) {
    return c - '0';
}

int main() {

    char str[14] = "";
    int t = 0;
    int condition_cnt = 0;

    scanf("%d", &t);

    while (t--) {
        scanf("%s", str);
        int len = strlen(str);

        for (int i = 0; i < len; i++) {
            int idx_num = CharToInt(str[i]);

            if (i != 0 && (len - i) % 3 == 0) {
                if (i >= 1 && str[i - 1] != '0') condition_cnt++;
                if (i >= 2 && str[i - 2] != '0') condition_cnt++;
                if (i >= 3 && str[i - 3] != '0') condition_cnt++;

                if (condition_cnt) {
                    printf("%s ", shortcuts[(len - i) / 3]);
                    condition_cnt = 0;
                }
            }


            switch ((len - i) % 3) {
                case 0: // hundreds
                    printf("%s ", hundreds[idx_num]);
                    break;
                case 1: // units
                    printf("%s ", units[idx_num]);
                    break;
                case 2: // tens
                    if (str[i] == '1') {
                        printf("%s ", tens[CharToInt(str[i + 1]) + 1]);
                        i++;
                    }
                    else
                        printf("%s ", twenties_plus[idx_num]);
                    break;
            }

        }

        printf("\n");
    }

    return 0;
}