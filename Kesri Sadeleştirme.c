#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
                                     
int main(){                          
	
	int pay,payda,ebob,min,found;
	
	printf("Kesrinizin payini giriniz:     ");
	scanf("%d",&pay);
	printf("                              ___\n");
	printf("Kesrinizin paydasini giriniz:  ");
	scanf("%d",&payda);	
	
	min=(pay<payda)?pay:payda;
	while(min>0 && found==0){
		if(pay%min==0 && payda%min==0){
			ebob=min;
			found=1;
		}		
		min--;
	}
	
	printf("Sonuc = %d",pay/ebob);
	printf("\n       ____\n");
	printf("        %d",payda/ebob);

	getch();
	return 0;
}
