#include <stdio.h>

int main() {
    
   int rows, coef = 1, space, i, j;
   
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   
   //main loop
   for (i = 0; i < rows; i++) {
       
       //each line 
       
       //at first , printing white space
       //(row number -1) numbers of whitespace will print at first
       //then it will reduce in the next steps,because i is increasing
      for (space = 1; space <= rows - i; space++)
         printf("  ");
         
      //loop for digits in same row   
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1; // coef means Coefficient
         else
            coef = coef * (i - j + 1) / j;
            
            
            
         //printing the triangle body for every row  
         //%4d used for padding , details in below
         printf("%4d", coef); 
         
         
         
      }
      printf("\n");
      
      
      
      
      
   }
   return 0;
}

/* 
Sample input :6 
Sample Output : 

            1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1

*/


/* 
about %4d --->

%nd is Called width option

https://www.cypress.com/file/54441/download
3.3 The Width Option

editors used by programmers.
To print a number with a certain (minimum)
width, say 5 spaces wide, the format specifier is %5d.

Notice that for shorter numbers, the result is
padded out with leading spaces. For excessively long
numbers there is no padding, and the full number is
printed.
In normal usage, one would make the field wide
enough for the biggest number one would ever expect. If your numbers are usually one, two, or three
digits long, then %3d is probably adequate. In abnormal usage, one could end up printing a number
that is too big for the field. printf makes the decision to print such numbers fully, even though they
take too much space. This is because it is better to
print the right answer and look ugly than to print
the wrong answer and look pretty.

Stack overflow :
https://stackoverflow.com/questions/44315920/what-is-the-use-of-4d-when-enclosed-by-parentheses

*/