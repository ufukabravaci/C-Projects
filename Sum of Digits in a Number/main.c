#include <stdio.h>
#include <stdlib.h>

//357 == 3+5+7 = 15

int sumOfDigits(int num)
{

    if (num < 10)
        return num ;
    return num%10 + sumOfDigits(num/10) ;
}


int main()
{
    int num ;
    printf("Insert a num : ");
    scanf("%d", &num);
    printf("Sum of digits of %d = %d",num , sumOfDigits(num));
    return 0;
}
