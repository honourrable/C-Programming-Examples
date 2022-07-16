#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
 
int min(int x, int y, int z){ 
	if(x < y){
		if(x < z)
			return x;
		else
			return z;
	}
	else{
		if(y < z)
			return y;
		else
			return z;
	}
}
 
int editDist(char* X, char* Y, int m, int n){
    if (m == 0)
        return n;

    if (n == 0)
        return m;

    if (X[m - 1] == Y[n - 1])
        return editDist(X,Y,m-1,n-1);
	
	else{
		return 1 + min(editDist(X,Y,m,n-1),
        	           editDist(X,Y,m-1,n), 
            	       editDist(X,Y,m-1,n-1));
    }
}

int main(){

    char X[] = "SUNDAY";
    char Y[] = "SATURDAY";
 	
 	int m = strlen(X); 
 	int n = strlen(Y); 
 	
    printf("Length of Edit Distance is: %d",editDist(X,Y,m,n));

	printf("\n\nThe program finished execution...");
	getch();
	return 0;
}

