// C program to illustrate structure padding and packing 
#include <stdio.h> 

#pragma pack(1)  // To force compiler to use 1 byte packaging 

// structure with padding 
struct str1 { 
	char c; 
	char a; 
    int i;
};


// driver code 
int main() 
{ 

	printf("Size of str1: %d\n", sizeof(struct str1)); 

	return 0; 
}

/*
actual size of structure member is 6 Bytes. 
but,here in struct str1 take 8 byte -> 2byte wasted 

->In Structure, sometimes the size of the structure is more than the size of all structures members because of structure padding.

->So, to avoid structure padding we can use pragma pack(1)
use #pragma pack(1), you instruct the compiler to pack the members of a structure or union with a 1-byte alignment. 

->after in struct str1 take 6 byte 
*/