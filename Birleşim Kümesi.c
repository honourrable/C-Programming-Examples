#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	int i,j,n,m,kume[50],kume2[50],birles[50];
	
	printf("Birinci kumenin eleman sayisini giriniz: ");
	scanf("%d",&n);
	printf("Ikinci kumenin eleman sayisini giriniz: ");
	scanf("%d",&m);
	printf("Birinci kumeyi giriniz: ");
	for(i=0;i<n;i++)
		scanf("%d",&kume[i]);
	printf("Ikinci kumeyi giriniz: ");
	for(i=0;i<m;i++)
		scanf("%d",&kume2[i]);
		
	for(i=0;i<n;i++)
		birles[i]=kume[i];
	
	i=0;
	while(i<m){
		j=0;
		while(j<m && kume2[i]!=birles[j]){
			j++;
		}						
		if(j==m){
			birles[n]=kume2[i];
			n++;
		}
		i++;			
	}
	printf("Birlesim kumesi: ");
	for(i=0;i<n;i++)
		printf("%d ",birles[i]);	
		
	getch();
	return 0;
}
