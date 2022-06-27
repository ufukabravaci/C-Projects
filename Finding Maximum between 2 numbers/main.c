#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 , num2 ;

    printf(" Enter num1 and num2 :\n");
    scanf("%d", & num1);
    scanf("%d", & num2);

    if (num1 > num2)

        printf ("Max = %d ", num1 );

    else
        printf("Max = %d", num2 );


    return 0;
}
