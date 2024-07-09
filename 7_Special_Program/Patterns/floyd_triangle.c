/*floyd's triangle
1
2 3
4 5 6
7 8 9 10*/

#include <stdio.h> 

int main() 
{ 
	int rows, n=1; 
    printf("enter the no of rows: ");
    scanf("%d",&rows);

	// first loop for printing rows 
	for (int i = 0; i < rows; i++)
     { 
		// second loop for printing character in each rows 
		for (int j = 0; j <= i; j++) 
        {
            printf("%d ", n++);   // for printing number 
		} 
		printf("\n"); 
	} 
}
