#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int knapSack(int W, int wt[], int val[], int n) { 
    if (n == 0 || W == 0) 
        return 0; 
  
    if (wt[n-1] > W) 
        return knapSack(W, wt, val, n - 1); 

    else{
    	if(val[n-1] + knapSack(W-wt[n-1],wt,val,n-1) > knapSack(W,wt,val,n-1))
    		return val[n-1] + knapSack(W-wt[n-1],wt,val,n-1);
    	else
    		return knapSack(W,wt,val,n-1);
	}
} 

int main() { 
    int val[] = {40, 42, 25, 12}; 
    int wt[] = {4, 7, 5, 3}; 
    int W = 10; 
    int n = sizeof(val) / sizeof(val[0]); 
    printf("The result : %d", knapSack(W, wt, val, n)); 
    
    getch();
    return 0; 
}

