#include <stdio.h>
#include <stdlib.h>

int main()
{
    int units , tens , hundreds , num ;

    printf("Enter the 3-digit number : ");
    scanf("%d" , &num) ;

    units = num % 10 ;
    tens = (num / 10) % 10 ;
    hundreds = num / 100 ;

    printf(" The reversed number of %d is %d%d%d" , num ,units,tens,hundreds );

    return 0;
}
