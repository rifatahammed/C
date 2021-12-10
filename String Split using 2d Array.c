#include <stdio.h>
#include <string.h>
int main()
{
    //declaring an array to keep the string
    char str[100];
    //declaring the 2D array
    char newString[10][10]; 
    int i,j,ctr;
    printf("Split string into words by space :\n\n");
 
    printf(" Input  a string : ");
    
    
    /*fgets function has 3 parameters, 
    first one is --> the holding variable 
    second one is --> number of characters to copy
    third one is --> pointer to the file stream (stdin means standard input)
    */
    fgets(str, sizeof str, stdin);	
 
 
 
    j=0; ctr=0; //ctr stands for counter
    for(i=0;i<=(strlen(str));i++) //The strlen() function calculates the length of a given string
    {
       
        // if space or NULL found, assign NULL into newString[ctr]
        if(str[i]==' '||str[i]=='\0')
        {
            newString[ctr][j]='\0'; //assigning NULL in start
            ctr++;  //for next word
            j=0;    //for next word, setting the init index to 0
        }
        else
        {
            newString[ctr][j]=str[i]; //taking a word , j means new row / word 
            j++;
        }
    }
    printf("String after split by space is :\n");
    for(i=0;i < ctr;i++)
        printf(" %s\n",newString[i]);
    return 0;
}


/* 
The null character '\0' (also null terminator),
abbreviated NUL, 
is a control character with the value zero.
Its the same in C and objective C
The character has much more significance in C
and it serves as a reserved character used to 
signify the end of a string
often called a null-terminated string

The length of a C string 
(an array containing the characters and terminated with a '\0' character)
is found by searching for the (first) NUL byte.

*/