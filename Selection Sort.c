#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	int n,i,j,max,temp,dizi[50];
	
	printf("Dizinin boyutunu giriniz: ");
	scanf("%d",&n);
	printf("Dizi elemanlarini giriniz: ");
	for(i=0;i<n;i++)
		scanf("%d",&dizi[i]);
	
	
	for(i=0;i<n-1;i++){
		max=i;
		for(j=i+1;j<n;j++){
			if(dizi[j]>dizi[max])
				max=j;
		}
		temp=dizi[i];
		dizi[i]=dizi[max];
		dizi[max]=temp;
	}
	for(i=0;i<n;i++)
		printf("%d ",dizi[i]);
	
	getch();
	return 0;
	
}
