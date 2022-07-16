#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
                                     
int main(){                          
	
	int i,j,n,m,x,k=0,sinif[50],sinif2[50],yeni[50];
	
	printf("Birinci sinifin mevcudunu giriniz: ");
	scanf("%d",&m);
	printf("Birinci sinifin notlarini giriniz: ");
	for(i=0;i<m;i++)
		scanf("%d",&sinif[i]);
	printf("Ikinci sinifin mevcudunu giriniz: ");
	scanf("%d",&n);
	printf("Ikinci sinifin notlarini giriniz: ");
	for(i=0;i<n;i++)
		scanf("%d",&sinif2[i]);
	
	i=0;
	j=0;
	while(i<m && j<n){
		if(sinif[i]<sinif2[j]){
			yeni[k]=sinif[i];
			i++;
		}
		else{
			yeni[k]=sinif2[j];
			j++;			
		}
		k++;			
	}
	
	if(i==m){
		for(x=j;x<n;x++){
			yeni[k]=sinif2[x];
			k++;
		}
	}
	else{
		for(x=i;x<m;x++){
			yeni[k]=sinif[x];
			k++;
		}
	}
	
	for(k=0;k<n+m;k++)
		printf("%d ",yeni[k]);
			
	getch();
	return 0;
}
