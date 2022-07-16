#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
                                     
int main(){                          
	
	int i,j,n,pascal[50][50];
	
	printf("Hangi sayiya kadar Pascal ucgenini yazdirmak istediginizi giriniz: ");
	scanf("%d",&n);
		
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<=i;j++){
			if(j==0 || j==i)
				pascal[i][j]=1;
			else
				pascal[i][j]=pascal[i-1][j-1] + pascal[i-1][j];
			printf("%3.d",pascal[i][j]);
		}
	}
	
	getch();
	return 0;
}
