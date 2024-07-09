/*print inverted left half pyramid pattern of star or numbers 
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

	for (int i = 1; i <= rows; i++) 
    { 
		// loop for printing leading whitespaces 
		for (int j = 1; j<=i; j++) 
        { 
			printf("  "); 
		} 

		// loop for printing continious numbers 
		for (int k = i; k < rows; k++)
        { 
            printf("* ");
			//printf("%d ", k); 
		} 
		printf("\n"); 
	} 
}
