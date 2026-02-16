#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int compare(const void* a, const void* b) {
	const char* pa1 = (const char*)a;
	const char* pa2 = (const char*)b;

	if (strlen(pa1) > strlen(pa2)) {
		return 1;
	}
	else if (strlen(pa1) < strlen(pa2)) {
		return -1;
	}
	else if (strlen(pa1) == strlen(pa2)) {
		if (strcmp(pa1, pa2) > 0)
			return 1;
		else return 0;
	}
	
}




int main() {
	
	int N, i = 0, Ntem;
	char str[20001][51];
	scanf("%d", &N);
	getchar();
	Ntem = N;
	while (Ntem--) {
		scanf("%s", str[i]);
		i++;
	}
	qsort(str, N, sizeof(str[0]), compare);

	printf("%s\n", str[0]);
	for (int i = 1; i < N; i++) {
		if (strcmp(str[i - 1], str[i]) != 0) {
			printf("%s\n", str[i]);
		}
	}



}