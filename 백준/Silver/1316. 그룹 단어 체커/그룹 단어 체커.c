#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	int N;
	scanf("%d", &N);
	char str[101];
	int num[26] = { 0 }, cnt = 0, swi = 0;
	for (int i = 0; i < N; i++) {
		scanf("%s", str);

		for (int i = 1; i < strlen(str); i++) {
				if (str[i - 1] != str[i]) {
					num[(int)str[i - 1] - 97]++;	
				}
			}

		num[(int)str[strlen(str) - 1] - 97]++;
		for (int i = 0; i < 26; i++) {
			if (num[i] >= 2) {
				swi = 1;
				break;
			}
		}
		if (swi == 0) cnt++;
		swi = 0;
		for (int i = 0; i < 26; i++) {
			num[i] = 0;
		}


	}
	printf("%d", cnt);
	return 0;
}