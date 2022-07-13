#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j ;
    int my2Darray[2][3] = {{5,7,9},{2,4,8}};

    for (i=0 ; i<2 ; i++)
    {
        for (j=0 ; j<3 ; j++)
        {
            printf("%d ", my2Darray[i][j]);
        }
        printf("\n");
    }


    return 0;
}
