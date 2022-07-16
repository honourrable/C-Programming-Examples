#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main(){
	
	float x,y;
	
	printf("Noktanizin X ve Y koordinatlarini girin: ");
	scanf("%f%f",&x,&y);
	
	if(x*y==0)
		printf("Eksen uzerindedir");
	else{
		if(x*y>0){
			if(x>0)
				printf("Birinci bolgededir");
			else
				printf("Ucuncu bolgededir");
		}
		else{		
			if(x>0)
				printf("Dorduncu bolgededir");
			else
				printf("Ikinci bolgededir");
		}
 	}
 	
	getch();
	return 0;
}
