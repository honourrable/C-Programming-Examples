#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int DiziMax(int dizi[], int n, int *indis);

int main(){
	
	srand(time(NULL));

	int dizi[50];
	int sonuc,indis,n,i;
	
	printf("Dizi boyutunu giriniz: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		dizi[i]=rand()%100;
		printf("%d  ",dizi[i]);
	}
			
	sonuc=DiziMax(dizi, n, &indis);
	printf("\nEn buyuk deger:%d ve Yeri:%d\n",sonuc,indis+1);
	
	getch();
	return 0;
}

int DiziMax(int dizi[], int n, int *indis)
{
	int i,max=dizi[0];	
	for (i=0;i<n;i++)
		if (max<dizi[i]){
			max=dizi[i];
			*indis=i;
		}
	return max;
}

