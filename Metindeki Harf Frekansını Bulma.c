#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	char harf='a',dizi[250];
	int i,counter[26];
	
	for(i=0;i<26;i++)
		counter[i]=0;
		
	printf("Metninizi giriniz:\n");
	gets(dizi);
	
	i=0;
	while(dizi[i]!=NULL){
		if(dizi[i]>='a' && dizi[i]<='z')
			counter[dizi[i]-'a']++;
		else if(dizi[i]>='A' && dizi[i]<='Z')
			counter[dizi[i]-'A']++;
		i++;
	}
	for(i=0;i<26;i++)
		printf("%c harfi %d tane\n",harf+i,counter[i]);
	
	getch();
	return 0;
	
	
	
	
	
	
}
