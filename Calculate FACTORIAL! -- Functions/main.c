#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{
    int i,result=1 ;

    for (i=1 ; i<=num ; i++)
    {
        result*= i ;
    }
        return result ;


}


int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num );

    if (num>0)
    printf("%d ! = %d\n5",num,factorial(num));

    else
        printf ("Enter a positive number !");

    return 0;
}
