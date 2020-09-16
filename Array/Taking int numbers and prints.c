#include <stdio.h>
#define MAX_SIZE 1000 // so this can handle up to 1000 numbers

int main()
{
    //initiating array at max size
    int arr[MAX_SIZE];
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    /* for loop to taking int values */
    printf("Enter %d elements in the array : ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }


    /* for loop to printing values */
    printf("\nElements in the array are: ");
    for(int i=0; i<n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
