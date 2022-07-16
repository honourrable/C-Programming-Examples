#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
                                     
int main(){                          
	
	int sayi,kup,temp,carp=1;
	
	printf("Sayinizi giriniz: ");
	scanf("%d",&sayi);
	
	kup=sayi*sayi*sayi;
	temp=sayi;
	
	while(temp!=0){
		temp=temp/10;
		carp=carp*10;
	}
	
	if(kup%carp==sayi)
		printf("Trimorphic sayidir");
	else
		printf("Degildir");

	getch();
	return 0;
}
