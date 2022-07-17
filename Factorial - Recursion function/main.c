#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{

    if (num == 1)
        return 1 ;
    return num * factorial(num-1);

}



int main()
{
    int num, result = 0 ;
    printf("Enter the num : ");
    scanf("%d", &num);
    result = factorial(num);
    printf("%d ! = %d\n",num , result);
    return 0;
}
