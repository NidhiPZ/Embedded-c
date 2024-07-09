/*print inverted pyramid pattern of star or numbers 
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

	for (int i = rows; i > 0; i--) 
    { 
		// loop for printing leading whitespaces 
		for (int j = rows; j>=i; j--) 
        { 
			printf("  "); 
		} 

		// loop for printing continious numbers 
		for (int k = 1; k <= 2*i-1; k++)
        { 
            printf("* ");
			//printf("%d ", k); 
		} 
		printf("\n"); 
	} 
}
