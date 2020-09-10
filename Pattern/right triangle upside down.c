/**
 * This will print Right triangle upside down
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
        /* Printing the star */
        for(j=i; j<=rows; j++)
        {
            printf("*");
        }

        /* Go to the next line */
        printf("\n");
    }

    return 0;
}
