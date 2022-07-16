#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int MaxRec(int *,int,int); 

int main(){        
	
	int n,i,array[50];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the array\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("\nmax:%d",MaxRec(array,0,n-1));
	
	getch();
	return 0;
}

int MaxRec(int dizi[],int max, int n){
	if(n<0) 
		return max;
	if (dizi[n]>max) 
		max=dizi[n];
	return MaxRec(dizi,max,n-1);
}
