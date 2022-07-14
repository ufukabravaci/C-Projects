#include <stdio.h>
#include <stdlib.h>

void printArr(int *ptr , int size)

{
    int i ;
    for (i=0 ; i< size ; i++)
    {
        printf("%d ", ptr[i]);
    }

}


void resetElementToZero(int *ptr , int size)
{
    int i ;
    for (i=0 ; i< size ; i++)
    {
        ptr[i] = 0;
    }


}



int main()
{
    int arr[3] = {1 , 3 , 5};
    printf("Before reseting :\n");
    printArr(arr , 3) ;
    printf("\nAfter reseting :\n");
    resetElementToZero(arr , 3) ;
    printArr(arr , 3 );
    return 0;
}
