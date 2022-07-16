#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main(){
	
	int i,n,taban,j=1,toplam=0,dizi[50];
	
	printf("Sayinin basamak sayisini belirtiniz: ");
	scanf("%d",&n);
	printf("Sayinizin hangi tabanda oldugunu giriniz: ");
	scanf("%d",&taban);
	printf("Sayinizi giriniz: ");
	for(i=0;i<n;i++)
		scanf("%d",&dizi[i]);
	
	for(i=n-1;i>=0;i--){
		toplam=toplam+dizi[i]*j;
		j=j*taban;	
	}
	
	printf("Sonuc: %d",toplam);	
	
	getch();
	return 0;
}
