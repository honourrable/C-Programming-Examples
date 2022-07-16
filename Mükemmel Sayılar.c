#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
                                     
int main(){                          
	
	int j,top,sayi=2,ust;
	
	printf("Ust siniri belirleyiniz: ");
	scanf("%d",&ust);
	
	while(sayi<ust){
		j=2;
		top=1;
		while(j<sayi){
			if(sayi%j==0)
				top=top+j;
			j++;	
		}
		if(top==sayi)
			printf("%d ",sayi);
		sayi++;
	}

	getch();
	return 0;
}
