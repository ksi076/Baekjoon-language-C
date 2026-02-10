#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int compare(const void* a, const void* b) {

	return (*(int*)a - *(int*)b);


}



int main() {
	int N;
	scanf("%d", &N);
	int* pa = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &pa[i]);
	}

	qsort(pa, N, sizeof(int), compare);

	for (int i = 0; i < N; i++) {
		printf("%d\n", pa[i]);
	}

	free(pa);

	return 0;
}