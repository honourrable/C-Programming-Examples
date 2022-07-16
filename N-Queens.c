#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include<math.h>

void print(int*,int,int);
int place(int*,int,int);
void queen(int*,int,int,int);

int main(){
	
	int board[20], count=0, n, i, j;
 
 	printf(" - N Queens Problem Using Backtracking -");
 	printf("\n\nEnter number of Queens: ");
 	scanf("%d",&n);
	queen(board,1,n,count);
	
	getch();
 	return 0;
}

void print(int* board, int n, int count){
	int i,j;
 	printf("\n\nSolution %d:\n\n",++count);
 
 	for(i=1;i<=n;++i)
  		printf("\t%d",i);
 
 	for(i=1;i<=n;++i){
  		printf("\n\n%d",i);
  		for(j=1;j<=n;++j){
   			if(board[i]==j)
    			printf("\tQ"); 
   			else
    			printf("\t-");
  		}
 	}
}

int place(int* board, int row,int column){
	int i;
 	for(i=1;i<=row-1;++i){
		if(board[i]==column)
   			return 0;
  		else
   			if(abs(board[i]-column)==abs(i-row))
    			return 0;
 	}
	return 1;
}

void queen(int* board, int row,int n, int count){
	int column;
 	
	for(column=1; column<=n; ++column){
  		if(place(board,row,column)){
   			board[row]=column;
   			if(row==n) 
    			print(board,n,count); 
   			else
    			queen(board,row+1,n,count);
  		}
 	}
}
