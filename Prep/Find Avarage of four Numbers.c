#include <stdio.h>
int main(){
   float avg = 0;
   int sum = 0;
   int x = 0;
    int i;

   int arr[4];

int length = sizeof(arr)/sizeof(arr[0]);
   for ( i = 0; i < length; i++)
   {
    scanf("%d",&arr[i]);
    sum = sum + arr[i];   
   }

   avg = sum/(double)length;

   printf(" Sum is : %d \n AVG is : %.2f" ,sum,avg);

   return 0 ;
}