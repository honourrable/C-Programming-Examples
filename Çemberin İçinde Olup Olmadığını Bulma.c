#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int x,y,r,i,j,a,b,nokta,matris[50][50];
	
	printf("Cemberin X koordinatini giriniz: ");
	scanf("%d",&x);
	printf("Cemberin Y koordinatini giriniz: ");
	scanf("%d",&y);
	printf("Cemberin yaricapini giriniz: ");
	scanf("%d",&r);
	printf("Kac adet nokta istediginizi giriniz: ");
	scanf("%d",&nokta);
	
	printf("2:Disinda  1:Uzerinde  0:Icinde\n");
	for(i=0;i<nokta;i++){		
			a=matris[i][0]=rand()%10+1;
			b=matris[i][1]=rand()%10+1;			
			if((x-a)*(x-a)+(y-b)*(y-b)>r*r)
				matris[i][2]=2;	
			else if((x-a)*(x-a)+(y-b)*(y-b)==r*r)
				matris[i][2]=1;
			else
				matris[i][2]=0;
			printf("%2d - %2d | %2d\n",matris[i][0],matris[i][1],matris[i][2]);
	}

	getch();
	return 0;
}
