#include <stdio.h>
#include <stdlib.h>



int sumOfArray(int *pArr, int size) ;



int main()
{

    int arr[3]= {1,3,10};
    int result = 0 ;
    result = sumOfArray (arr , 3);
    printf ("The result of sum = %d\n", result);
    return 0;
}

int sumOfArray(int *pArr, int size)
{
    int i ;
    int sum=0 ;

    for(i=0 ; i<size ; i++)
    {
        sum = sum + pArr[i];
    }
    return sum ;
}
