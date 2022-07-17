#include <stdio.h>
#include <stdlib.h>

int sumUpTo (int num)
{
    if (num == 1)
        return 1;
    return num + sumUpTo(num-1) ;
}



int main()
{
    int num ;
    int result=0 ;
    printf("Enter your number : ");
    scanf("%d3", &num);
    result = sumUpTo(num) ;
    printf("Result = %d\n", result);
    return 0;
}
