//search element in array
#include <stdio.h>
int main()
{
    int N,i;
    printf("Enter size of array: ");
    scanf("%d", &N);
    int arr[N];
    int Search, found;

    
    printf("Enter elements in array: ");
    for(i=0; i<N; i++)
    {
        printf("index[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &Search);

    //Assume that element does not exists in array 
    found = 0; 
    
    for(i=0; i<N; i++)
    {      
      // If element is found in array then raise found flag and terminate from loop. 
        if(arr[i] == Search)
        {
            found = 1;
            break;
        }
    }

     // If element is not found in array 
     if(found == 1)
     {
        printf("%d is found at index[%d]", Search, i);
     }
     else
     {
        printf("%d is not found in the array", Search);
     }

}