#include <stdio.h>
#include <stdlib.h>


void printMinMax (int num1 , int num2 )

{
    if (num1>num2)
    {
        printf("Maximum is %d\n", num1);
        printf("Minimum is %d\n", num2);
    }
    else
    {
        printf("Maximum is %d\n", num2);
        printf("Minimum is %d\n", num1);
    }


}





int main()
{

    int a,b ;
    printf("Please enter number 1 : ");
    scanf("%d", &a);

    printf("Please enter number 2 : ");
    scanf("%d", &b);

    printMinMax(a,b);

    return 0;
}
