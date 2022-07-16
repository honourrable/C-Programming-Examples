#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	int i,j,n,m,A[50][50],B[50][50];
	
	printf("Matrisin satir sayisini girin: ");
	scanf("%d",&n);
	printf("Matrisin sutun sayisini girin: ");
	scanf("%d",&m);
	printf("Matrisi giriniz:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			scanf("%d",&A[i][j]);
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			B[i][j]=A[j][i];	
		}
	}
	printf("\nTranspozesi:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d ",B[i][j]);
		printf("\n");
	}
		
	getch();
	return 0;
}
