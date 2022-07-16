#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
                                     
int main(){                          
	
	int i,j,m,n,max,min,maxi,maxj,mini,minj,matris[50][50];
	
	printf("Matrisinizin satir sayisini giriniz: ");
	scanf("%d",&m);
	printf("Matrisinizin sutun sayisini giriniz: ");
	scanf("%d",&n);
	printf("Matrisinizi giriniz:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			scanf("%d",&matris[i][j]);
	}
	
	max=matris[0][0];
	min=matris[0][0];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(matris[i][j]>max){
				max=matris[i][j];
				maxi=i;
				maxj=j;
			}				
			else if(matris[i][j]<min){
				min=matris[i][j];
				mini=i;
				minj=j;
			}				
		}
	}
	printf("En buyuk eleman %d ve yeri %d.satir - %d.sutun\n",max,maxi+1,maxj+1);
	printf("En kucuk eleman %d ve yeri %d.satir - %d.sutun",min,mini+1,minj+1);
		
	getch();
	return 0;
}
