#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
                                     
int main(){                          
	
	int i=2,j=-1,numb,arr[50];
	
	printf("This program writes the prime factors of a positive integer number");
	printf("\n\nEnter the number: ");
	scanf("%d",&numb);
	
	while(numb!=1){
		if(numb%i==0){
			j++;
			arr[j]=i;
			numb=numb/i;		
		}
		else
			i++;	
	}
	
	for(i=0;i<j;i++){
		printf("%d x ",arr[i]);		
	}
	printf("%d",arr[j]);
	
	getch();
	return 0;
}
