#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,count=0;
	printf("Enter the number:");
	scanf("%d",&n);

	if(n==1)
	{
	    printf("It is neither prime nor composite");
	    exit(0);
    }

	 for(int i=2;i<=n/2;i++)
     {
         if(n%i==0)
         count++;
     }

 if(count==0)
 printf("%d is a prime number\n",n);
 else
 printf("%d is not a prime number\n",n);
    
}