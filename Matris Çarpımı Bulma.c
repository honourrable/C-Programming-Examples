#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
                                     
int main(){                          
	
	int i,j,k,n,m,p,r,toplam,mat[50][50],mat2[50][50],carpim[50][50];
	
	printf("Ilk matrisin satir ve sutun sayisini sirayla giriniz: ");
	scanf("%d%d",&n,&m);
	printf("Ikinci matrisin sair ve sutun sayisini sirayla giriniz: ");
	scanf("%d%d",&p,&r);
	if(m!=p){
		printf("Carpma islemi yapilamaz, yeniden deneyiniz\n\n");
		return main();
	}
	else{
		printf("Ilk matrisi giriniz:\n");
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
				scanf("%d",&mat[i][j]);
		}
		printf("Ikinci matrisi giriniz:\n");
		for(i=0;i<m;i++){
			for(j=0;j<r;j++)
				scanf("%d",&mat2[i][j]);
		}
		for(i=0;i<n;i++){
			for(j=0;j<r;j++){
				toplam=0;
				for(k=0;k<m;k++)
					toplam=toplam+mat[i][k]*mat2[k][j];
			
			carpim[i][j]=toplam;
			}
		}
		
		printf("\nSonuc:\n");
		for(i=0;i<n;i++){
			for(j=0;j<r;j++)
				printf("%d ",carpim[i][j]);
			printf("\n");
		}
	}

	getch();
	return 0;
}
