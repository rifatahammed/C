#include <stdio.h>

int main()
{
    int num = 10;
    int * ptr;

    /* Stores the address of num to pointer type */
    ptr = &num;

    printf("Address of num = %d\n", &num);
    printf("Value of num = %d\n", num);

    printf("Address of ptr = %d\n", &ptr);
    printf("Value of ptr = %d\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);

    return 0;
}