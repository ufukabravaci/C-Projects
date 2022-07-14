#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
#include <math.h>

int main()
{

    int i, j ;
    int values[SIZE] = {-1, 2 , 3 , -6 };
    int minSum = values[0] + values[1] ;
    int currentSum ;

    for(i=0 ; i<SIZE ; i++)
    {
        for(j=i+1 ; j<SIZE ; j++)
        {
            currentSum = values[i] + values[j] ;
            if (abs(currentSum) < abs(minSum))
                minSum = currentSum ;
        }
    }
       printf("Minimum sum is %d !\n", minSum);



    return 0;
}
