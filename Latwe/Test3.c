#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int num = 0, prev_num = 0, cnt = 0;
	int i = 0;

	while (1) {
		if (cnt == 3) break;
		scanf("%d", &num);
		if (num == 42 && prev_num != 42 && i > 0) cnt++;
		printf("%d\n", num);
		prev_num = num;
		i++;
	}
	
	return 0;
}
