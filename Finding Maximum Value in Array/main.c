#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[] = {5,3,6,3,4,8,9};
    int i, max ;

    max = arr[0];

    for (i=1 ; i<7 ; i++)
    {
        if (arr[i] > max )
        max = arr[i];
    }


    printf("The max amongst this array is %d\n", max);

    return 0;
}
