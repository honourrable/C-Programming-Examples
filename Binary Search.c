#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <pthread.h>

int main(){        
	
	int n,arr[50],i,x,high,mid,found=0,low=0;
	
	printf("Enter the size of array: ");
	scanf("%d,",&n);
	high=n-1;
	printf("Enter the array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the searching value: ");
	scanf("%d",&x);
	
	while(low<=high && !(found)){
		mid=(low+high)/2;
		if(arr[mid]==x)
			found=1;
		else{
			if(arr[mid]<x)
				low=mid+1;
			else
				high=mid-1;
		}
	}
	if(found==0)
		printf("The searching value doesn't exist");
	else
		printf("Its at %d.cell",mid+1);
	
	getch();
	return 0;
}




