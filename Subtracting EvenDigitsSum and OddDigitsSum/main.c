#include <stdio.h>
#include <stdlib.h>

int main()
{
    int CurrentDigit , num , EvenSum=0 , OddSum=0 ;

    printf("Enter the num :");
    scanf("%d", &num);



    while (num>0)

        {

        CurrentDigit = num % 10 ;
    if (CurrentDigit % 2 == 0)
        EvenSum += CurrentDigit ;

        else
        OddSum += CurrentDigit ;
    num = num / 10 ;
        }

        printf ("Even digit sum - Odd digit sum = %d",EvenSum-OddSum);


    return 0;
}
