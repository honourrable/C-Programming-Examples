#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	int i,n,max,Max,dizi[50];
	
	printf("Kac adet sayi ise belirtiniz: ");
	scanf("%d",&n);
	printf("EKOK'unu hesaplamak istediginiz sayilari giriniz: ");
	for(i=0;i<n;i++)
		scanf("%d",&dizi[i]);
		
	max=0;
	for(i=0;i<n;i++){
		if(dizi[i]>dizi[max])
			max=i;
	}	
	Max=dizi[max];
	
	i=0;
	while(i<n){
		if(Max%dizi[i]==0)
			i++;
		else{
			Max++;
			i=0;
		}
	}
	printf("Sayilarin EKOK'u: %d",Max);
	
	getch();
	return 0;
	
	
	
	
	
	
}
