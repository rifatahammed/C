#include <stdio.h>

int main()
{
  int array[100], n, i, j, swap;

  printf("How many numbers do yopu want to insert?\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  for (i = 0 ; i < n - 1; i++)
  {
      
    for (j = 0 ; j < n - i - 1; j++)
    {
       printf("%d ",j+1);
      if (array[j] > array[j+1]) /* For decreasing order use '<' instead of '>' */
      {
          //swapping current 2 numbers 
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++)
     printf(" %d ", array[i]);

  return 0;
}