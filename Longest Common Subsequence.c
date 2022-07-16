#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
  
int lcs(char* X, char* Y, int m, int n){ 
	if (m == 0 || n == 0) 
     	return 0; 
   	if (X[m-1] == Y[n-1]) 
    	return 1 + lcs(X, Y, m-1, n-1); 
   	else{
   		if(lcs(X,Y,m,n-1) > lcs(X,Y,m-1,n))
   			return lcs(X,Y,m,n-1);
   		else
   			return lcs(X,Y,m-1,n);
	}
} 

int main(){
 
	char X[] = "LONGEST"; 
  	char Y[] = "STONE"; 
  
  	int m = strlen(X); 
 	int n = strlen(Y); 
  
  	printf("Length of LCS is: %d", lcs(X,Y,m,n)); 
	
	printf("\n\nThe program finished execution...");  
  	getch();
  	return 0; 
} 

