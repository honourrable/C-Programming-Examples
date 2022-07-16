#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <pthread.h>

void binaryRec(int* arr, int num, int low, int high){
	int mid;
	if(low>high){
		printf("Not found!");
		return;
	}
		
	else{
		mid = (low + high)/2;
		if(arr[mid] == num)
			printf("Found at %d.index!",mid+1);
		else{
			if(arr[mid] < num)
				binaryRec(arr,num,mid+1,high);
			else
				binaryRec(arr,num,low,high-1);
		}
	}
}

int main() {
	
	int arr[] = {-23,-12,0,5,8,12,17,23,31,45,77};
	int num;
	printf("Enter a number to search: ");
	scanf("%d",&num);
	
	binaryRec(arr,num,0,10);
	
	getch();
	return 0;
}
