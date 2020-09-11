/*this will print fibonacci series by using for loop */
#include<stdio.h>
int main()
{
    int n, first_number = 0, second_number = 1, next_number, i;
    printf("How many numbers from Fibonacci series you Want to Print: ");
    scanf("%d",&n);

    printf("\nFirst %d numbers of Fibonacci series:\n",n);
    for ( i = 0 ; i < n ; i++ )
    {

       if ( i <= 1 )
          /* This will print first two numbers, 0 & 1 */
          next_number = i;
       else
       {
          next_number = first_number + second_number;
          first_number = second_number;
          second_number = next_number;
       }
       printf("%d ",next_number);
    }

    return 0;
}
