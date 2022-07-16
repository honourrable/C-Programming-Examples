#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*void quickSort(int arr[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(arr[i]<=arr[pivot] && i<last)
            i++;
         while(arr[j]>arr[pivot])
            j--;
         if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }

      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      quickSort(arr,first,j-1);
      quickSort(arr,j+1,last);
   }
}*/

void swap(int* a, int* b) { 
    int t = *a; 
    *a = *b; 
    *b = t; 
}

int partition (int arr[], int low, int high){ 
    int pivot = arr[high];   
    int j,i = (low - 1);  
  
    for (j=low; j<=high-1; j++) { 
        if (arr[j] < pivot) {            
			i++;   
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i+1); 
}
void quickSort(int arr[], int low, int high) { 
    if (low < high){ 
        int pi = partition(arr,low,high); 
        quickSort(arr,low,pi-1); 
        quickSort(arr,pi+1,high); 
    } 
}

int main() {
	
	int i, arr[] = {12,371,0,5,-16,86,29,500,106,-43,77,33,51,124,145,-210};
	
	printf("Unsorted array:");
	for(i=0; i<16; i++)
		printf("%d ",arr[i]);
		
	quickSort(arr,0,15);
		
	printf("\nSorted array:");
	for(i=0; i<16; i++)
		printf("%d ",arr[i]);
	
	getch();
	return 0;
}

