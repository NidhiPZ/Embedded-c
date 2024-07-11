#include<stdio.h>

int fun()
{
    static int num = 16;
    return num--;
}

int main()
{
    for (fun(); fun(); fun())
    printf("%d ",fun());
    return 0;
}
/*
initialize ;   condition  ;        updation
func(16) T ;   func(15) T ; -> 14 ; func() / 13
func(13) T ;   func(12) T ; -> 11 ; func(13) / 10
func(10) T ;   func(9) T ; -> 8   ; func(10)/7
func(7) T ;   func(6) T ; -> 5   ; func(7) /4
func(4) T ;   func(3) T ; -> 2   ; func(4) /1
func(1) T ;   func(0) F ; -> out of loop; func(1)

ot put will be -> 14,11,8,5,2
*/