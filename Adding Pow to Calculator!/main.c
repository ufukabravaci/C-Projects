#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, pow , result=1 ;

    printf("Enter the number : ");
    scanf ("%d", &num);
    printf("Enter the power : ");
    scanf ("%d", &pow);

    while (pow>0)

    {
        result = result * num ;
        pow-- ;
    }

    printf ("The result is : %d\n", result);

    return 0;
}
