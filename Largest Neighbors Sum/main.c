#include <stdio.h>
#include <stdlib.h>
#define SIZE 5



int main()
{

    int arr[SIZE] = {9, 5 , 3 , 7 , 1 };
    int i , max ;

    max = arr[0]+ arr[1];
    for (i = 1 ; i < SIZE-1 ; i++)
        if (arr[i]+arr [i+1] > max)
    {
        max = arr[i]+arr [i+1];
    }
printf("Max = %d", max);

    return 0;
}
