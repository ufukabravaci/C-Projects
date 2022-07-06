#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, count=1 ;
    printf ("Number of the asterisks : ");
    scanf ("%d", &num);

    while (count<=num)
    {
        printf ("*");

        count=count+1 ;
    }
    return 0;
}
