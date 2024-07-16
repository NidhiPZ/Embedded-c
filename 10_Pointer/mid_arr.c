// #include<stdio.h>
// int *findMid(int a[], int n)
// {
//     return &a[n/2];
// }
// int main()
// {
//     int a[] = {1,2,3,4,5,6};
//     int n = sizeof(a)/sizeof(a[0]);
//     int *mid = findMid(a,n);
//     printf("%d", *mid);
// }

#include <stdio.h>

int *findMid(int a[], int n)
 {
    // Check if the size of the array is even
    if (n % 2 == 0)
        // For even-sized arrays, the middle two elements are at index n/2 - 1 and n/2
        return &a[n / 2 - 1];
    
    else 
        // For odd-sized arrays, there is only one middle element at index n/2
        return &a[n / 2];
}

int main()
 {
    // int a[] = {1, 2, 3, 4, 5, 6};  // Change this to an odd-sized array to test that case
    // int n = sizeof(a) / sizeof(a[0]);
    int n, i;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
     printf("enter the element of array:");
    for(i=0; i<n; i++)
    {
        printf("index[%d] = ", i);
        scanf("%d",&arr[i]);
       
    }

    // Check if the array size is even or odd
    if (n % 2 == 0) 
    {
        // Array size is even
        int *mid = findMid(arr, n);
        printf("Middle elements are: %d and %d\n", *mid, *(mid + 1));
    }
     else 
    {
        // Array size is odd
        int *mid = findMid(arr, n);
        printf("Middle element is: %d\n", *mid);
    }
}
