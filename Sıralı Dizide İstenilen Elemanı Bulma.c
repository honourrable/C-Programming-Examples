#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	int n,i,wanted,dizi[50];
	
	printf("Dizi boyutunu girin: ");
	scanf("%d",&n);
	printf("Diziyi girin: ");
	for(i=0;i<n;i++)
		scanf("%d",&dizi[i]);
	
	printf("Hangi elemani ariyorsunuz: ");
	scanf("%d",&wanted);
	
	i=0;
	while(i<n && wanted>dizi[i])
		i++;	
	
	if(i<n && dizi[i]==wanted)
		printf("Eleman bulundu   %d.sirada",i+1);
	else
		printf("%d elemani mevcut degil",wanted);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
	
	
	
	
	
	
}
