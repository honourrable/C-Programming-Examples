#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	int i,j,k=0,n,m,kume[50],kume2[50],kesisim[50];
	
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
	
	i=0;
	while(i<n){
		j=0;
		while(j<m && kume[i]!=kume2[j])
			j++;
		if(j<m){
			kesisim[k]=kume[i];
			k++;
		}
		i++;
	}
	printf("Kesisim kumesi: ");
	for(i=0;i<k;i++)
		printf("%d ",kesisim[i]);
	
	getch();
	return 0;
}
