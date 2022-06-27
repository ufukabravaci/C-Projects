#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3 ;
    int max, min ;

    printf(" Enter the first number : ");

    scanf("%d",&num1);

    printf(" Enter the second number : ");

    scanf("%d",&num2);

    printf(" Enter the third number : ");

    scanf("%d",&num3);

    max=num1;
    min=num2;

    if (num2>num1)
    {
        max=num2 ;
        min=num1 ;
    }
    if (num3>max)

     max=num3 ;

    if (num3<min)

    min=num3 ;

    printf("Maximum between 3 numbers : %d\n",max);
    printf("Minimum between 3 numbers : %d\n",min);


    return 0;
}
