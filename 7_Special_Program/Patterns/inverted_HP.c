//print right half pyramid pattern of star or number
/*
   * * * 
   * *
   *
*/
#include <stdio.h> 

int main() 
{ 
	int rows; 
    printf("enter the no of rows: ");
    scanf("%d",&rows);

	// first loop for printing rows 
	for (int i = 0; i < rows; i++)
     { 
		// second loop for printing character in each rows 
		for (int j = 0; j < rows - i; j++) 
        { 
			printf("* "); 
           // printf("%d ", j+1);   // for printing number 
           // printf("%c ", 'A' + j);   // for printing char
		} 
		printf("\n"); 
	} 
}
