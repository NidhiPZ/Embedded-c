#include<stdio.h>
int main()
{
    int num;
    int size = sizeof(num) * 4;  //its take 32  bit
    printf("enter the hex value: ");
    scanf("%x",&num);
    
    int cnt_0 =0; 
    int cnt_1 = 0;
    // for the binary number print
    printf("binary form is:");
    for(int i = size - 1; i>=0; i--)
    {
        int bit = (num >> i ) & 1;
        printf("%d",bit);
        
        if(bit==1)
            cnt_1++;
        else
            cnt_0++;
    }
    printf("\ndecimal equivalant is : %d",num);
    printf("\nnumber of 1's  is: %d",cnt_1);
    printf("\nnumber of 0's is: %d",cnt_0);
    }
    
