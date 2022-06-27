#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int a;
    printf("Enter the integer whether positive or negative :");
    scanf("%d", &a);

    if (a<=0)
    {

    printf("The absolute value of %d is |%d|",a,-1*a);
    }

    else
        printf("The absolute value of %d is |%d|",a,a);



    return 0;
}
