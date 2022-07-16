#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
                                     
int main(){                          
	
	srand(time(NULL));
	
	int n,i,j,yasli=0,yetis=0,genc=0,cocuk=0,kisi[50];
	
	printf("Nufusu giriniz: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		kisi[i]=rand()%100+1;
		
	for(i=0;i<n;i++){
		if(kisi[i]>=65)
			yasli++;
		else if(kisi[i]>=25)
			yetis++;
		else if(kisi[i]>=10)
			genc++;
		else
			cocuk++;
	}
		
	for(i=0;i<n;i++){
		printf("%2.d.kisi ",i+1);
		printf("%2.d \n",kisi[i]);		
	}
		
	printf("Yasli kisi sayisi: %d\n",yasli);
	printf("Yetiskin kisi sayisi: %d\n",yetis);
	printf("Genc kisi sayisi: %d\n",genc);
	printf("Cocuk kisi sayisi: %d",cocuk);		
	
	getch();
	return 0;
}
