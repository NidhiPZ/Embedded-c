// merge two arrays in third one.
#include <stdio.h>  
#define N 50

int main() 
{  
    int arr1, arr2, i;
    int a[N], b[N];
    int merged[N];


    // Asking user to input the size and elements of the first array.
    printf("enter size of the 1st array: ");
    scanf("%d", &arr1);
    printf("enter elements for 1st array:\n");
    for(i = 0; i < arr1; i++) 
    {
        scanf("%d", &a[i]);
    }

    // Asking user to input the size and elements of the second array.
    printf("enter size of the 2nd array: ");
    scanf("%d", &arr2);
    printf("enter elements for 2nd array:\n");
    for(i = 0; i < arr2; i++) 
    {
        scanf("%d", &b[i]);
     }

    // Merging the two arrays.
    for(i = 0; i < arr1; i++)
    {
        merged[i] = a[i];  // First array elements.
     }
    for(i = 0; i < arr2; i++) 
    {
        merged[arr1+i] = b[i];  // Second array elements.
     }

    // Displaying the merged array.
    printf("Merged array is:\n");
    for(i = 0; i < arr1 + arr2; i++) 
    {
        printf("%d ", merged[i]);
     }

}