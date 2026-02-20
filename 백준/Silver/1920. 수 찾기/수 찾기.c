#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int compare(const void* a, const void* b) {
	int* num1 = (int*)a;
	int* num2 = (int*)b;

	if (*num1 > *num2) return 1;
	else if (*num1 < *num2) return -1;
	return 0;
}


int binary_search(int arr[], int size, int target) {
	int left = 0;
	int right = size - 1;
	

	while (right >= left) {
		int mid = (left + right) / 2;
		if (arr[mid] == target) return 1;
		else if (arr[mid] > target) right = mid - 1;
		else if (arr[mid] < target) left = mid + 1;
	}
	
	return 0;
}

int main() {
	int N, M;
	scanf("%d", &N);
	int* pa = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &pa[i]);
	}
	scanf("%d", &M);
	int* pa2 = (int*)malloc(sizeof(int) * M);
	for (int i = 0; i < M; i++) {
		scanf("%d", &pa2[i]);
	}

	qsort(pa, N, sizeof(pa[0]), compare);

	for (int i = 0; i < M; i++) {
		if (binary_search(pa, N, pa2[i]) == 1) printf("1\n");
		else printf("0\n");
	}



	free(pa);
	free(pa2);
	return 0;
}