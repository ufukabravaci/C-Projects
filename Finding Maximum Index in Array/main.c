#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7];
    int i, maxIndex ;

    for (i=0 ; i<7 ; i++)
    {
        printf("Enter the number %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    maxIndex = 0 ;
    for (i=1 ; i<7 ; i++)

    if (arr[i] > arr[maxIndex])
    {
        maxIndex = i ;
    }

    printf("Index of max digit is %d \n",maxIndex);

    return 0;
}
