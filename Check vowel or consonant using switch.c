#include <stdio.h>

int main()
{
    char ch;

    /* Input alphabet from user */
    printf("Enter any character: ");
    scanf("%c", &ch);

    /* Switch ch value */
    switch(ch)
    {
        case 'a': 
        case 'e': 
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
            printf("Vowel");
            break;

        default: printf("Consonant");
    }

    return 0;
}