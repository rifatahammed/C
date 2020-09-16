#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the love size : ");
    scanf("%d", &n);

    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            //white space for left top corner
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            //left upper part
            printf("*");
        }

        for(j=1; j<=n-i; j++)
        {
            //whitespace for upper middle curve
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            //right upper part
            printf("*");
        }

        //end of the upper part
        printf("\n");
    }

    //lower part of the shape(decreasing)
    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            //whitespace for left side of the lower part
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            //main body
            printf("*");
        }

        //go to the next line
        printf("\n");
    }

    return 0;
}
