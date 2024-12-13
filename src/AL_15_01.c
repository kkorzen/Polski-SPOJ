// Kod: AL_15_01
// Link: https://pl.spoj.com/problems/AL_15_01/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char* darek_answers = NULL; size_t da_size = 0;
	char* jarek_answers = NULL; size_t ja_size = 0;
	char* marek_answers = NULL; size_t ma_size = 0;

	int max_jarek_points = 0;
	int max_marek_points = 0;

	int da_len = getline(&darek_answers, &da_size, stdin);
	int ja_len = getline(&jarek_answers, &ja_size, stdin);
	int ma_len = getline(&marek_answers, &ma_size, stdin);

	for (int i = 0;i < da_len - 1;i++) {
		if (marek_answers[i] == jarek_answers[i]) {
			if (darek_answers[i] != jarek_answers[i]) max_jarek_points++;
			if (darek_answers[i] != marek_answers[i]) max_marek_points++;
		}
		else {
			if (darek_answers[i] != jarek_answers[i]) max_jarek_points++;
			else if (darek_answers[i] != marek_answers[i]) max_marek_points++;
		}
	}

	printf("%d\n", max_jarek_points + max_marek_points);

	return 0;
}
