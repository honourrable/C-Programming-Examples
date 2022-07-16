#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main(){
	
	int sayi,taban,i,j,dizi[50];
	
	printf("Sayinizi giriniz: ");
	scanf("%d",&sayi);	
	printf("Hangi tabana donusturmek istediginizi giriniz: ");
	scanf("%d",&taban);
	
	i=0;
	while(sayi>=taban){
		dizi[i]=sayi%taban;
		sayi=sayi/taban;
		i++;
	}
	
	dizi[i]=sayi;
	printf("Sonuc: ");
	for(j=i;j>=0;j--)
		printf("%d",dizi[j]);
	
	getch();
	return 0;
}
