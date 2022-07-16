#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int fibo(int);

int main(){        
	
	int i,x;
	
	printf("Fibonacci elemanini belirtiniz: ");
	scanf("%d",&x);
	for(i=0;i<x;i++)
		printf("%d  ",fibo(i));
	
	getch();
	return 0;
}
int fibo(int x){
	if(x==1 || x==0)
		return 1;
	return fibo(x-1)+fibo(x-2);	
}




