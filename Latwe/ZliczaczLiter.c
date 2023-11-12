/*
	Kod zadania:	JZLICZ
	Link:			https://pl.spoj.com/problems/JZLICZ/
*/

#include <stdio.h>
#include <string.h>

char letters_b[26] = { 65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90, };  // wielkie litery
char letters_s[26] = { 97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122 };  // male litery

void zli(char* str, char* letters_cnt) {

	for (int i = 0; i < strlen(str); i++) {
		switch (str[i]) {
		case 65: letters_cnt[0]++; break;
		case 66: letters_cnt[1]++; break;
		case 67: letters_cnt[2]++; break;
		case 68: letters_cnt[3]++; break;
		case 69: letters_cnt[4]++; break;
		case 70: letters_cnt[5]++; break;
		case 71: letters_cnt[6]++; break;
		case 72: letters_cnt[7]++; break;
		case 73: letters_cnt[8]++; break;
		case 74: letters_cnt[9]++; break;
		case 75: letters_cnt[10]++; break;
		case 76: letters_cnt[11]++; break;
		case 77: letters_cnt[12]++; break;
		case 78: letters_cnt[13]++; break;
		case 79: letters_cnt[14]++; break;
		case 80: letters_cnt[15]++; break;
		case 81: letters_cnt[16]++; break;
		case 82: letters_cnt[17]++; break;
		case 83: letters_cnt[18]++; break;
		case 84: letters_cnt[19]++; break;
		case 85: letters_cnt[20]++; break;
		case 86: letters_cnt[21]++; break;
		case 87: letters_cnt[22]++; break;
		case 88: letters_cnt[23]++; break;
		case 89: letters_cnt[24]++; break;
		case 90: letters_cnt[25]++; break;

		case 97: letters_cnt[26]++; break;
		case 98: letters_cnt[27]++; break;
		case 99: letters_cnt[28]++; break;
		case 100: letters_cnt[29]++; break;
		case 101: letters_cnt[30]++; break;
		case 102: letters_cnt[31]++; break;
		case 103: letters_cnt[32]++; break;
		case 104: letters_cnt[33]++; break;
		case 105: letters_cnt[34]++; break;
		case 106: letters_cnt[35]++; break;
		case 107: letters_cnt[36]++; break;
		case 108: letters_cnt[37]++; break;
		case 109: letters_cnt[38]++; break;
		case 110: letters_cnt[39]++; break;
		case 111: letters_cnt[40]++; break;
		case 112: letters_cnt[41]++; break;
		case 113: letters_cnt[42]++; break;
		case 114: letters_cnt[43]++; break;
		case 115: letters_cnt[44]++; break;
		case 116: letters_cnt[45]++; break;
		case 117: letters_cnt[46]++; break;
		case 118: letters_cnt[47]++; break;
		case 119: letters_cnt[48]++; break;
		case 120: letters_cnt[49]++; break;
		case 121: letters_cnt[50]++; break;
		case 122: letters_cnt[51]++; break;

		default: break;
		}
	};
}

int main() {
	int N;
	char str[200];
	char letters_cnt[52] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i <= N; i++) {
		fgets(str, 200, stdin);
		zli(str, letters_cnt);
	}

	for (int i = 26; i < 52; i++) {
		if (letters_cnt[i] > 0) {
			printf("%c %d\n", letters_s[i - 26], letters_cnt[i]);
		}
	}
	for (int i = 0; i < 26; i++) {
		if (letters_cnt[i] > 0) {
			printf("%c %d\n", letters_b[i], letters_cnt[i]);
		}
	}

	return 0;
}
