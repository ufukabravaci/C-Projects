#include <stdio.h>
#include <stdlib.h>

/*  f0 = 0
    f1 = 1
    f2= f1+f2
    f3 = f2+f1
    ...
    fn = fn-1 + fn-2
*/

int fib(int num)
{
    if (num == 0)
        return 0 ;
    if (num == 1)
        return 1 ;

    return fib(num-1) + fib(num-2);
}




int main()
{
    int num ;
    printf("Enter a num :");
    scanf("%d", &num);
    printf("Fib %d = %d",num, fib(num));
    return 0;
}
