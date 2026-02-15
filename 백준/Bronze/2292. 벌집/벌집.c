#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	int N, Ntem;
	scanf("%d", &N);
	int count = 0;

	int i = 0;
	int c = 1;

	
	

	while (c < N) {
		c += (6 * i);
		
		

		i++;
		count++;	

	}

	if (N == 1) {
		printf("1");
		return 0;
	}

	printf("%d", count);
	return 0;
}
