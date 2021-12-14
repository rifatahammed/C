#include<stdio.h>
#include <string.h>

int main() {
   char string[50] = "Hi this is a test string";

   // using strtok to split the string
   char * words = strtok(string, " ");

  
//when NULL will come, that means the word is finished
   while( words != NULL ) {
      printf( " %s\n", words ); //printing each words
      words = strtok(NULL, " ");
   }
   return 0;
}

/*

About strtok

Description
The C library function char *strtok(char *str, const char *delim) breaks string str 
into a series of tokens using the delimiter delim.

Declaration
Following is the declaration for strtok() function.

char *strtok(char *str, const char *delim)
Parameters
str − The contents of this string are modified 
and broken into smaller strings (tokens).

delim − This is the C string containing the delimiters. 
These may vary from one call to another.

Return Value
This function returns a pointer to the first token found in the string. 
A null pointer is returned if there are no tokens left to retrieve

 */