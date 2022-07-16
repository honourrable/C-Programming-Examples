#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main(){        
	
	int n,arr[50],i,j,tmp;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	for(i=1;i<n;i++){
		tmp=arr[i];
		j=i;
		while(j>0 && tmp<arr[j-1]){
			arr[j]=arr[j-1];
			j=j-1;
		}
		arr[j]=tmp;	
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
	getch();
	return 0;
}

