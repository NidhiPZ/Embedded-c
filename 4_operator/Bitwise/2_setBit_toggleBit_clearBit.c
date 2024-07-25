#include<stdio.h>
int main()
{
    int num, pos;
    printf("enter the num:");
    scanf("%d",&num);
    printf("enter the pos:");
    scanf("%d",&pos);
    
    // //set bit
    // num= num | 1<<pos;
    // printf("after the set bit at pos %d number = %d\n",pos,num);
   
    // //toggel bit
    // num= num ^ 1<<pos;
    // printf("\nafter the toggel bit at pos %d number = %d\n",pos,num);
    
    // //clear bit
    // num= num &~(1<<pos);
    // printf("after the clear bit at pos %d number = %d",pos,num);

    //set bit
    num= num>>1;
    printf("after the remove lst bit the number = %d\n",num);
}