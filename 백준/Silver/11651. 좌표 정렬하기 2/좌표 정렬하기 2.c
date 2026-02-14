#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int compare(const void* a,const void* b) {
	int* pa1 = (int*)a;
	int* pa2 = (int*)b;

	if (pa1[1] > pa2[1]) return 1;
	if (pa1[1] < pa2[1]) return -1;
	if (pa1[1] == pa2[1]) {
		if (pa1[0] > pa2[0]) return 1;
		else if (pa1[0] < pa2[0]) return -1;
	}
}





int main() {
	int N;
	int xy[100000][2];
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &xy[i][0], &xy[i][1]);		
	}

	qsort(xy, N, sizeof(xy[0]), compare);

	for (int i = 0; i < N; i++) {
		printf("%d %d\n", xy[i][0], xy[i][1]);
	}
	return 0;

}