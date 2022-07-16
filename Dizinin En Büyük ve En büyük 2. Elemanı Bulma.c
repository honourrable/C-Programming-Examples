#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main(){
	
	int n,i,max,max2,dizi[50];
	
	printf("Dizinin eleman boyutunu giriniz: ");
	scanf("%d",&n);
	printf("Diziyi giriniz: ");
	for(i=0;i<n;i++)
		scanf("%d",&dizi[i]);
	
	max=(dizi[0]>dizi[1]?0:1);
	max2=(dizi[0]<dizi[1]?0:1);
	
	for(i=2;i<n;i++){
		if(dizi[i]>dizi[max]){
			max2=max;
			max=i;			
		}
	}
	printf("%d %d",dizi[max],dizi[max2]);
	
	getch();
	return 0;
}
