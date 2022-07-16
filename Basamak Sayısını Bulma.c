#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main(){
	
	int i,sayi,counter=0,basamak[50];
	
	printf("Enter the number: ");
	scanf("%d",&sayi);
	
	i=0;
	while(sayi!=0){
		basamak[i]=sayi%10;
		sayi=sayi/10;
		counter++;
		i++;
	}
	printf("Digits: ");
	for(i=counter-1;i>=0;i--)
		printf("%d ",basamak[i]);
	
	printf("\nDigits number: %d",counter);
	
	getch();
	return 0;
}
