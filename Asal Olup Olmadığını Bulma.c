#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main(){
	
	int sayi,i,j;
	
	printf("Enter the number that you want to check: ");
	scanf("%d",&sayi);
	
	j=sqrt(sayi);
	i=2;
	while(i<=j && sayi%i!=0)
		i++;
	if(i==j+1 && sayi!=1)
		printf("Number is prime");
	else
		printf("Number is not prime");
	
	getch();
	return 0;
}
