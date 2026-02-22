#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char str[100001][110];


int compare(const void* a, const void* b) {
	char* str1 = (char*)a;
	char* str2 = (char*)b;

	int num1 = atoi(str1);
	int num2 = atoi(str2);

	if (num1 > num2) return 1;
	else if (num1 < num2) return -1;
	else if (num1 == num2) {
		return -1;
	}

	
}


int main() {
	int N;
	scanf("%d", &N);
	getchar();

	for (int i = 0; i < N; i++) {
		fgets(str[i], 110, stdin);
	}
	qsort(str, N, sizeof(str[0]), compare);

	for (int i = 0; i < N; i++) {
		printf("%s", str[i]);
	}

	return 0;


}