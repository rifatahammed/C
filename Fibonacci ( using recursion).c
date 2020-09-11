/*this will print fibonacci series by using recursion */
#include<stdio.h>
int fibonacci_series(int);
int main()
{
   int n, c = 0, i;
   printf("How many numberbers from Fibonacci series you Want to Print: ");
   scanf("%d",&n);

   printf("\nFirst %d numbers of Fibonacci series:\n",n);
   for ( i = 1 ; i <= n ; i++ )
   {
      printf("%d ", fibonacci_series(c));
      c++;
   }

   return 0;
}
int fibonacci_series(int number)
{
   if ( number == 0 )
     return 0;
   else if ( number == 1 )
     return 1;
   else
     return ( fibonacci_series(number-1) + fibonacci_series(number-2) );
}
