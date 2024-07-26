#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fptr;
    int num = 12345;

    fptr = fopen("11_file.bin", "wb");  // Open in binary write mode
    if (fptr == NULL) 
    {
        printf("Error opening file!");
        exit(1);
    }

    fwrite(&num, sizeof(num), 1, fptr);  // Write the integer to the file

    fclose(fptr);

    return 0;
}
