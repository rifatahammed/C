/* This will print a Right Triangle */

#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter line number:");
    scanf("%d", &n);

    /* Loop For n lines */
    for(i=1; i<=n; i++)
    {
         /* Loop For print stars within an specific line */
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        /* Go to the next line */
        printf("\n");
    }

    return 0;
}
