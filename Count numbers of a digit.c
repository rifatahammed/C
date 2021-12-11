#include <stdio.h>  
int main()  
{  
   int number; 
   int count=0;   
   printf("Enter a number");  
   scanf("%d",&number);  
   while(number!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     
   printf("\nThe number of digits in an integer is : %d",count);  
    return 0;  
}  