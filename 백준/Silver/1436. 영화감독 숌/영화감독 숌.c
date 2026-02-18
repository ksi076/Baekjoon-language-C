#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int num = 665;
	int N, count = 0, j = 0;
	scanf("%d", &N);
	char str[100];

	while (1) {
		num++;
		sprintf(str, "%d", num);
		if (strstr(str, "666") != NULL) count++;
		if (count == N) break;
	}

	printf("%s", str);
	return 0;
}
