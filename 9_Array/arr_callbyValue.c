//Pass array with call by value to find the multiplication of given number
#include<stdio.h>
int mul(int arr[5]);

int main()
{
    int arr[5]= {1, 2, 3, 4, 5};
    int result = mul(arr);
    printf("multiplication of given array is: %d", result);
}

int mul(int arr[5])
{
    int mul=1;
    for(int i =0; i<5; i++)
    {
        mul *= arr[i];
    }
    return mul;

}