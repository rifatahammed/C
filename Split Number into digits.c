#include<stdio.h>

int main(){

  int num,temp,factor=1;

  printf("Enter a number: ");

  scanf("%d",&num);

  //holding the number in the temporary variable
  temp=num;

  //reducing the temp number 1 digit by myltiplying 10
  //allocating one digit more in factor by multiplying 10
  while(temp){

      temp=temp/10;

      factor = factor*10;

  }

  printf("Each digits of the given number are: ");

  //printing each digit from the left
  while(factor>1){

      factor = factor/10;

      printf("%d ",num/factor);

      num = num % factor;

  }

  return 0;

}

/* 
Sample input: 1234
Sample output: 1 2 3 4 */