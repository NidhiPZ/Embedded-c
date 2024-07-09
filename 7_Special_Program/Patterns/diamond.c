//print diamond pattern
/*
      * 
    * * *
  * * * * *
    * * *
      *
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
		for (int k = 1; k <= 2*i-1; k++)
        { 
          // printf("* ");
			printf("%d ", k); 
		} 
		printf("\n"); 
    }

        for (int i = rows - 1; i > 0; i--) 
         { 
		// loop for printing leading whitespaces 
		for (int j = rows; j>=i; j--) 
        { 
			printf("  "); 
		} 

		// loop for printing continious numbers 
		for (int k = 1; k <= 2*i-1; k++)
        { 
           // printf("* ");
			printf("%d ", k); 
		} 
		printf("\n"); 
	} 
}
	