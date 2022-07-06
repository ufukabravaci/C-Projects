#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result=1 , i , num, pow ;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &pow);

    for (i=1; i<=pow ; i++)
    {
        result=result*num;
    }

        printf("The result is %d!\n", result);
    return 0;
}
