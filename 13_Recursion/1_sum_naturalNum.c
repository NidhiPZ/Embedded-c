//calculate the sum of first N natural numbers using recursion
#include <stdio.h>
int recursionCount = 0;
int Sum(int n)
{
    recursionCount++;  // Increment the counter each time the function is called

    // base condition to terminate the recursion when N = 0
    if (n == 0)
        return 0;

    // recursive case / recursive call
    int res = n + Sum(n - 1);

    return res;
}

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);

    // calling the function
    int sum = Sum(n);

    printf("Sum of First %d Natural Numbers: %d\n", n, sum);
    printf("The recursion function was invoked %d times.", recursionCount);

    return 0;
}
