#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int dizi_ara(int *,int,int);
  
int main(){          

	srand(time(NULL));                
	
	int i,x,n,sonuc,dizi[50];
	
	printf("Dizinin boyutunu giriniz: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		dizi[i]=rand()%20;
		
	printf("Aramak istediginiz elemani giriniz: ");
	scanf("%d",&x);
	
	sonuc=dizi_ara(dizi,n,x);
	if(sonuc==-1)
		printf("Aradiginiz eleman bulunamadi\n");
	else
		printf("Aradiginiz eleman %d. gozde\n",sonuc);
	for(i=0;i<n;i++)
		printf("%d  ",dizi[i]);
	
	getch();
	return 0;
}

int dizi_ara(int *dizi,int n,int x){
	if(n<0)
		return -1;
	else{
		if(dizi[n-1]==x)
			return n;
		else
			return dizi_ara(dizi,n-1,x);
	}
}





