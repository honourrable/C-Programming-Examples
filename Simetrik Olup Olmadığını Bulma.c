#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	int i,j,n,found,matris[50][50];
	
	printf("Matrisin mertebesini giriniz: ");
	scanf("%d",&n);
	printf("Matrisi giriniz:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			scanf("%d",&matris[i][j]);
	}
	
	i=0;
	found=0;
	while(i<n){
		j=i+1;
		while(j<n){
			if(matris[i][j]!=matris[j][i])
				found=1;
			j++;
		}
		i++;
	}
	
	if(found==0)
		printf("Simetriktir");
	else
		printf("Simetrik degildir");
	
	getch();
	return 0;
	
	
	
	
	
	
}
