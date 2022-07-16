#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int multifunc(int);
  
int main(){                          
	
	int x;
	
	printf("Lutfen islem yapmak istediginiz sayiyi giriniz: ");
	scanf("%d",&x);
	
	printf("Sonuc: %d",multifunc(x));
	
	getch();
	return 0;
}

int multifunc(int x){
	if(x==1)
		return 1;
	else
		return x*multifunc(x-1);		
}


