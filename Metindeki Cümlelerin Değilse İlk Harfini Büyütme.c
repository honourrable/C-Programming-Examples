#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	char dizi[250];
	int i;
	
	printf("Metninizi giriniz:\n");
	gets(dizi);
	i=0;
	while(dizi[i]!=NULL){
		if(dizi[i]=='.'){
			if(dizi[i+2]>='a' && dizi[i+2]<='z'){
				dizi[i+2]=dizi[i+2]-'a'+'A';
			}				
		}
		i++;
	}
	puts(dizi);
	
	getch();
	return 0;
	
	
	
	
	
	
}
