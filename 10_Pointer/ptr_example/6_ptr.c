#include<stdio.h>
int f(int *a, int n)
{
    if(n <= 0)
        return 0;
    else if(*a % 2 == 0)
        return *a + f(a+1, n-1);
    else 
        return *a - f(a+1, n-1);
}

int main()
{
    int a[]={12,7,13,4,11,6};
    printf("%d", f(a,6));   //f(a[0] , 6)

}

/*
Start with f(a, 6) where a points to 12:
12 is even, so: 12 + f(a+1, 5)                 12+3->15
7 is odd, so: 7 - f(a+2, 4)                    7-4->3
13 is odd, so: 13 - f(a+3, 3)                  13-9->4
4 is even, so: 4 + f(a+4, 2)                   4+5->9
11 is odd, so: 11 - f(a+5, 1)                  11-6 ->5
6 is even, so: 6 + f(a+6, 0)   now down to up=> 6 + 0->6
Returns 0
*/