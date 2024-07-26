#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fptr;
    int num;

    fptr = fopen("11_file.bin", "rb");  // Open in binary read mode
    if (fptr == NULL) 
    {
        printf("Error opening file!");
        exit(1);
    }

    fread(&num, sizeof(num), 1, fptr);  // Read the integer from the file

    printf("Read value: %d\n", num);

    fclose(fptr);

    return 0;
}
