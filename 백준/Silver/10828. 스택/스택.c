#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 10000

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

int size(Stack* s) {
	int cnt = 0;
	for (int i = 0; i <= s->top; i++) {
		cnt++;
	}
	return cnt;
}

int main() {
	Stack s;
	init(&s);
	int N;
	char str[100];
	char cmd[20];
	int numchange;
	scanf("%d", &N);
	getchar();

	for (int i = 0; i < N; i++) {
		
		fgets(str, 100, stdin);
		sscanf(str, "%s %d", cmd, &numchange);
		if (str[0] == 'p' && str[1] == 'u') {
			push(&s, numchange);
		}
		
		if (str[0] == 't') printf("%d\n", peek(&s));
		if (str[0] == 'p' && str[1] == 'o') {
			printf("%d\n", peek(&s));
			pop(&s);
		}
		if (str[0] == 's') {
			printf("%d\n",size(&s));
		}
		if (str[0] == 'e') {
			printf("%d\n", empty(&s));
		}
	}
    
    return 0;
}