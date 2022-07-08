#include <stdio.h>
#include <stdlib.h>

void maxdigit (int num)
{
    int  units, tens;

    if (num<10 || num>99)
        printf("The number is not 2 digits!");
    else
    {

        units = num % 10 ;
    tens = (num / 10) ;
        if (units<tens)
            printf("%d is bigger !",tens);
        else if (units == tens)
            printf("The two digits are equals !");
        else
            printf("%d is bigger !",units);
    }
}


int main()
{
    int num ;
     printf("Enter the num : ");
    scanf ("%d", &num);
    maxdigit(num);
    return 0;
}
