#include<stdio.h>

int func(int num)
{
    int cnt = 0;
   // int cnt = 2;

    while(num)
    {
        cnt++;
        num >>= 1;
       // num >>= 2;
    }
    return(cnt);
}
 int main()
 {
    int num=435;
    int count=func(num);
    printf("%d",count);
 }
 /* cnt=0 and num >>= 1 -> 9 count 
    cnt=2 and num >>= 2 -> 7 count
 */