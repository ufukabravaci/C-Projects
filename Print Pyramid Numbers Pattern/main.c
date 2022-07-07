#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j ,k, spc ,count , row ;

    printf (" Enter the number of rows in the pyramid : ");
    scanf ("%d", &row);

    spc= row-1;

    for (i=1 ; i<=row ; i++)
        {


        for (k=spc ; k>=1 ; k--)
        {
          printf (" ");
        }


        for (j=1 ; j<=i ; j++)
        {

        printf ("%d ", count);

        count+=1 ;
        }

        spc-- ;
        printf ("\n");

        }

    return 0;
}
