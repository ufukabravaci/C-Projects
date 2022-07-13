#include <stdio.h>
#include <stdlib.h>

int sumOfDivisors (int (number))
{
    int sum=0 , i  ;

    for (i=1 ; i<=number ; i++)
    {
        if (number % i ==0)
        {
            sum += i;
        }
    }

    return sum ;


}


int main()
{
    int number ;
    printf("Enter a number : ");
    scanf("%d", &number);

    printf("The sum of the divisors of %d is %d",number , sumOfDivisors(number));
    return 0;
}
