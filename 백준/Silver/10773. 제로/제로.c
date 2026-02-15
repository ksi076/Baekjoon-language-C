#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 100000

typedef struct {
	int data[MAX];
	int top;
}Stack;

int init(Stack* s) {
	s->top = -1;
}

int empty(Stack* s) {
	if (s->top == -1) return 1;
	return 0;
}

int full(Stack* s) {
	if (s->top == MAX - 1) return 1;
	return 0;
}

int push(Stack* s, int value) {
	if (full(s) == 1) return -1;
	return s->data[++(s->top)] = value;
}

int pop(Stack* s) {
	if (empty(s) == 1) return -1;
	return s->data[(s->top)--];
}

int peek(Stack* s) {
	if (empty(s) == 1) return -1;
	return s->data[s->top];
}

int sum(Stack* s) {
	int hap = 0;
	for (int i = 0; i <= s->top; i++) {
		hap += s->data[i];
	}
	return hap;
}



int main() {
	Stack s;
	int N, su, Ntem;
	init(&s);
	scanf("%d", &N);
	Ntem = N;
	while (Ntem--) {
		scanf("%d", &su);
		
		if (su == 0) {
			pop(&s);
			continue;
		}
		
		push(&s, su);

		
	}
	printf("%d", sum(&s));
	

	return 0;
}
