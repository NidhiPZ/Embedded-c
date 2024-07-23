//if odd number found then add 1 and even found then substract 1 nd print the sequnce upto 10
#include<stdio.h>
void odd(int n);
void even(int n);
int n = 1;

void odd(int n)
{
    if(n<=10)
    {
        printf("%d ",n+1);
        n++;
        even(n);
    }
    return;
}
void even(int n)
{
    if(n<=10)
    {
        printf("%d ",n-1);
        n++;
        odd(n);
    }
    return;
}
 int main()
 {
    odd(n);
 }