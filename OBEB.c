#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	int n,i,min,Min,dizi[50];
	
	printf("Kac adet sayi ise belirtiniz: ");
	scanf("%d",&n);
	printf("EBOB'unu bulmak istediginiz sayilari giriniz: ");
	for(i=0;i<n;i++)
		scanf("%d",&dizi[i]);
	
	min=0;
	for(i=0;i<n;i++){
		if(dizi[i]<min)
			min=i;
	}
	Min=dizi[min];
	
	i=0;
	while(i<n){
		if(dizi[i]%Min==0)
			i++;
		else{
			Min--;
			i=0;
		}
	}	
	printf("Sayilarin EBOB'u: %d",Min);
	
	getch();
	return 0;
	
	
	
	
	
	
}
