#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , quick_sum= 1000000 ;
    float total_amount = 0.01 ;

    for (i=1 ; i<=30 ; i++)
    {
        printf("Day %d => Amount : %.2f\n",i , total_amount);
        total_amount = total_amount*2;
    }

    printf ("Total amount after 30 days is = %.2f\n\n", total_amount );

    return 0;
}
