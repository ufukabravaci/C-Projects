#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , sum=0 , i ;

    printf("Enter the num : ");
    scanf("%d", &num);

    for (i=num ; i>0 ; i--)
    {
       sum = i+sum ;
    }


    printf("\nThe sum of the all number from 1 to %d is %d\n\n", num, sum);
    return 0;
}
