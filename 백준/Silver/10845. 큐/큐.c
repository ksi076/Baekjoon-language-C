#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 10000


typedef struct {
	int data[MAX];
	int front;
	int rear;
}Queue;

int init(Queue *q) {
	q->front = 0;
	q->rear = -1;
	return 0;
}

int empty(Queue* q) {
	if (q->front > q->rear) return 1;
	return 0;
}

int full(Queue* q) {
	if (q->rear == MAX - 1) return 1;
	return 0;
}

int push(Queue* q, int value) {
	if (full(q) == 1) return -1;
	return q->data[++(q->rear)] = value;
}

int pop(Queue* q) {
	if (empty(q) == 1) return -1;
	return q->data[(q->front)++];
}

int size(Queue* q) {
	if (empty(q) == 1) return 0;
	return q->rear - q->front + 1;
}

int front_value(Queue* q) {
	if (empty(q) == 1) return -1;
	return q->data[(q->front)];
}

int back_value(Queue* q) {
	if (empty(q) == 1) return -1;
	return q->data[(q->rear)];
}

int main() {
	Queue q;
	init(&q);
	int N, num;
	char str[50];
	char strl[50];
	scanf("%d", &N);
	getchar();

	while (N--) {
		fgets(str, 50, stdin);
		str[(strlen(str) - 1)] = '\0';
		sscanf(str, "%s %d", strl, &num);
		if (strcmp(strl, "push") == 0) {
			push(&q, num);
		}
		if (strcmp(strl, "front") == 0) {
			printf("%d\n", front_value(&q));
		}
		if (strcmp(strl, "back") == 0) {
			printf("%d\n", back_value(&q));
		}
		if (strcmp(strl, "empty") == 0) {
			printf("%d\n", empty(&q));
		}
		if (strcmp(strl, "pop") == 0) {
			printf("%d\n", pop(&q));
		}
		if (strcmp(strl, "size") == 0) {
			printf("%d\n", size(&q));
		}
	}
	return 0;
}