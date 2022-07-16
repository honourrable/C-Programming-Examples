#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

float usalma(float,float);

int main(){        
	
	float x,y;
	
	printf("Tabani giriniz: ");
	scanf("%f",&x);
	printf("Ussu giriniz: ");
	scanf("%f",&y);
	printf("Sonuc: %.3f",usalma(x,y));
	
	getch();
	return 0;
}
float usalma(float x,float y){         //y tam sayi olacak sekilde yazildi
	if(y>0){
		if(y==1)
			return x;
		return x*usalma(x,y-1);
	}
	else{
		x=1/x; y=y*-1;
		if(y==1)
			return x;
		return x*usalma(x,y-1);
	}
}
