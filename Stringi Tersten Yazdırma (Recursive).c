#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>

void tersyaz (char *);

int main(){        
	
	char *kelime;
	int uzunluk;
	
	printf("Kelimenizin uzunlugunu giriniz: ");
	scanf("%d",&uzunluk);
	kelime=(char *)malloc((uzunluk+1)*sizeof(char));
	printf("Kelimenizi giriniz: ");	
	scanf("%s",kelime);
	
	tersyaz(kelime);
	
	getch();
	return 0;
}
void tersyaz (char *str){
	if(*str){
		tersyaz(str+1);
		printf("%c",*str);
	}
}



