/**
 * This will print Left angle / Mirrored Right angle triangle
 */

#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter line numbers : ");
    scanf("%d", &rows);

    /* For every Lines */
    for(i=1; i<=rows; i++)
    {
        /* Printing the spaces first */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Printing the star */
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        /* Go to the next line */
        printf("\n");
    }

    return 0;
}
