#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
                                     
int main(){                          
	
	int a,b,c,d,e,f,adet=0,ust,alt;
	
	printf("Kac basamakli polindrom sayilari istediginizi belirtiniz: ");
	scanf("%d",&ust);
	
	if(ust==2){
		alt=10;
		while(alt<100){
			if(alt%10==alt/10){
				printf("%d ",alt);
				adet++;
			}
		alt++;
		}
	printf("\nIstenilen aralikta %d tane polindrom sayi mevcuttur",adet);		
	}
	
	else if(ust==3){
		alt=100;
		while(alt<1000){
			if(alt%10==alt/100){
				printf("%d ",alt);
				adet++;
			}
		alt++;
		}
	printf("\nIstenilen aralikta %d tane polindrom sayi mevcuttur",adet);
	}
                               
	else if(ust==4){
		alt=1000;
		while(alt<10000){
			if((alt%100)/10==(alt/100)%10 && (alt/1000)==alt%10){
				printf("%d ",alt);
				adet++;
			}
		alt++;		
		}
	printf("\nIstenilen aralikta %d tane polindrom sayi mevcuttur",adet);
	}
	
	else if(ust==5){
		alt=10000;
		while(alt<100000){
			if(alt/10000==alt%10 && (alt/1000)%10==(alt%100)/10){
				printf("%2.d ",alt);
				adet++;
			}
		alt++;		
		}
	printf("\nIstenilen aralikta %d tane polindrom sayi mevcuttur",adet);		
	}
	else
		printf("\nIstenilen aralik polindrom sayilar bulmaya uygun degildir!");
	
	getch();
	return 0;
}
