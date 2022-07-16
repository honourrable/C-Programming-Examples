#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
                                     
int main(){                          
	
	int n,i,toplam=0,dizi[50];
	
	printf("Kacinci elemani istediginizi giriniz: ");
	scanf("%d",&n);
	dizi[0]=1;
	dizi[1]=1;
	
	if(n-1==0 || n-1==1)
		printf("%d. eleman: 1",n);
	else{
		for(i=2;i<n;i++)
			dizi[i]=dizi[i-1]+dizi[i-2];
		
		printf("%d. eleman: %d",n,dizi[n-1]);	
	}
	
	getch();
	return 0;
}
