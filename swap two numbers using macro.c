#include <stdio.h>

// Define macro to swap two numbers
// ^ means bitwise XOR
#define SWAP(x, y) (x ^= y ^= x ^= y)

int main()
{
    int num1, num2;

    // Input two numbers from users
    printf("Enter any two number to swap: ");
    scanf("%d%d", &num1, &num2);

    printf("Values before swapping\n");
    printf("num1 = %d, num2 = %d\n\n", num1, num2);

    SWAP(num1, num2);

    printf("Values after swapping\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}