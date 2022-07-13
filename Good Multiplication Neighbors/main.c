#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


int main()
{
    int myArr[SIZE];
    int i ;
    int hasGood = 0 ;

    for (i=0 ; i<SIZE ; i++)
    {


        printf("Enter the value %d : ", i+1);
        scanf("%d", &myArr[i]);
    }

    for (i=1 ; i< SIZE - 1 ; i++)
    {

        if (myArr[i] == myArr[i-1]*myArr[i+1])
    {
        hasGood = 1 ;
        printf("\nArray has good neighbours ! \n");
       return 0 ;

    }
    }
        printf("This array has no good neighbours !\n");




    return 0;
}
