#include <stdio.h>

int main()
{
    // Define the 3D array
    int x[2][3][2];
    
    // Prompt user to input values
    printf("Enter values for the 3D array x[2][3][2]:\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j) 
        {
            for (int k = 0; k < 2; ++k) 
            {
                printf("Enter value for x[%d][%d][%d]: ", i, j, k);
                scanf("%d", &x[i][j][k]);
            }
        }
    }

    // Print the elements of the 3D array
    printf("\nElements of the 3D array:\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j) 
        {
            for (int k = 0; k < 2; ++k) 
            {
                printf("index at x[%d][%d][%d] = %d\n", i, j, k, x[i][j][k]);
            }
        }
    }

    return 0;
}
