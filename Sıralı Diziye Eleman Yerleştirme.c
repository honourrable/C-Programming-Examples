#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
                                     
int main(){                          
	
	int i,j,n,x,dizi[50];
	
	printf("Dizi boyutunu giriniz: ");
	scanf("%d",&n);
	printf("Dizi elemanlarini giriniz: ");
	for(i=0;i<n;i++){
		scanf("%d",&dizi[i]);	
	}
	printf("Yerlestirmek istediginiz sayiyi giriniz: ");
	scanf("%d",&x);
	
	i=0;
	while(i<n && x>dizi[i]){
		i++;
	}
	
	if(i==n)
		dizi[n]=x;
	else{
		for(j=n-1;j>=i;j--)
			dizi[j+1]=dizi[j];
		dizi[i]=x;			
	}
	
	for(j=0;j<=n;j++)
		printf("%d ",dizi[j]);
			
	getch();
	return 0;
}
