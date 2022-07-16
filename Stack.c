#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <pthread.h>

#define MAX 10

typedef struct Stack{	
	int top;
	int item[];
}Stack;

int isEmpty(Stack* S){
	if(S->top == 0)
		return 1;
	else
		return 0;
}
int isFull(Stack* S){
	if(S->top == MAX)
		return 1;
	else
		return 0;
}
void pop(Stack* S){
	if(isEmpty(S))
		printf("The stack is empty");
	else
		--S->top;
}
void push(Stack* S, int x){
	if(isFull(S))
		printf("The stack is full");
	else{
		S->item[S->top] = x;
		S->top++;
	}		
}
void print(Stack* S){
	if(isEmpty(S))
		printf("The stack is empty");
	else{
		int temp = S->top;
		while(temp > 0)
			printf("%d\n",S->item[--temp]);	
	}
}

int main() {
	
	Stack* S = (Stack*)malloc(sizeof(Stack));
	S->top=0;
	
	push(S,12);
	pop(S);
	print(S);
	
	getch();
	return 0;
}



