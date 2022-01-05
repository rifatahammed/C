#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    
    int num, sum=0, firstDigit, lastDigit;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    lastDigit = num % 10;
    
    
    while(num >= 10){
    num = num / 10;
    }
    
    firstDigit = num;
    
    
    //Finding sum of first and last digit
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit: %d",sum);
    return 0;
}