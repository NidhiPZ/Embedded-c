#include<stdio.h>
#include<stdlib.h>
#define Menu  "----Array operations----\n"        \
              "1. find sum of all element\n"      \
              "2. find max element in array\n"    \
              "3. find min elemrnt in array\n"    \
              "4. reverse the given elements\n"   \
              "5. sort the given elemnts\n"      \
              "6. exit\n"  \
              "Enter '0' to open menu again\n"  \
              "----------------------------\n"


int sum_of_ele();
int max_ele();
int min_ele();
int reverse_ele();
int sortig();

int i;
int main()
{
    int choice,max, min;
    printf("%s",Menu);

    while(1)
    {
         printf("\nEnter the choice:");
         scanf("%d",&choice); 

         switch (choice)
         {
         case 1:
            sum_of_ele();
            break;
        case 2:
            max_ele();
            break;
        case 3:
            min_ele();
            break;
        case 4:
            reverse_ele();
            break;
        case 5:
            sortig();
            break;
        case 6:
            exit(1);
            break;
        
        default:
            printf("Inavalid choice");
            break;
         }
    }
     
}
int sum_of_ele()
{
    int N ,sum=0;
    printf("enter the size of array: ");
    scanf("%d",&N);
    int arr[N];

    printf("enter the elements: ");
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array is : ");
    for(int i=0; i<N; i++)
    {
        printf("%d ",arr[i]);
    }

    for(int i=0; i<N; i++)
    {
        sum += arr[i];
    }
    printf("\nsum of all element is : %d\n",sum);
    return sum;
}

int max_ele()
{
    int N; 
    printf("enter the size of array:");
    scanf("%d", &N); 
    int a[N];
    // int i;
     printf("Enter elements in array : ");
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];

    //Traverse the array
    for(i=1; i<N; i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("maximum is : %d",max);
}
int min_ele()
{
    int N; 
    printf("enter the size of array:");
    scanf("%d", &N); 
    int a[N];
    printf("Enter elements in array : ");
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }

    int min=a[0];

    //Traverse the array
    for(i=1; i<N; i++)
    {
        if(min>a[i])
        min=a[i];

    }
    printf("minimum is : %d\n",min);
}

int reverse_ele()
{
    int N;
    printf("enter the size of array:");
    scanf("%d",&N);
    int a[N];
    printf("enter the elements in array: ");
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray element is: ");
    for(i=0; i<N; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nReversed array is:");
    for(i=N-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
}

int sortig()
{
    int N;
    int i,j,temp ,c;
    printf("Enter the size of Array:");
    scanf("%d",&N);
    int a[N];
    printf("enter the elemtns:");
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is:");
    for(i=0; i<N; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n---which operation u want to execute---\n");
    printf("1.Sorting in Ascending order\n");
    printf("2.Sorting in Descending order\n");

    printf("Enter the choice:");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        for(i=0; i<N; i++)
        {
            for(j=i+1; j<N; j++)
            {
                if(a[i]>a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }

            }
        }
        printf("\nArray in ascending order is:");
        for(i=0; i<N; i++)
        {
            printf("%d ",a[i]);
        }
        break;

    case 2:
        for(i=0; i<N; i++)
        {
            for(j=i+1; j<N; j++)
            {
                if(a[i]<a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("\nArray in Descending order:");
        for ( i = 0; i < N; i++)
        {
            printf("%d ", a[i]);
        }
        break;
    
    default:
        printf("Invalid option");
        break;
    }

}
