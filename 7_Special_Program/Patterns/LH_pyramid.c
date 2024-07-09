//print left half pyramid pattern of star or numbers 
/*    1 
    1 2
  1 2 3
  */
#include <stdio.h> 

int main() 
{ 
	int rows; 
    printf("enter the no of rows: ");
    scanf("%d",&rows);

	for (int i = 1; i <= rows; i++) 
    { 
		// loop for printing leading whitespaces 
		for (int j = rows; j>=i; j--) 
        { 
			printf("  "); 
		} 

		// loop for printing continious numbers 
		for (int k = 1; k <= i; k++)
        { 
           // printf("* ");
			printf("%d ", k); 
		} 
		printf("\n"); 
	} 
}
