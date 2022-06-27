#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,num ;

    printf("Enter a 3 digit number : ");
    scanf("%d", &num);

    a=num/100 ;
    b=(num/10)%10 ;
    c=num%10 ;

    if (a<b && b<c)
        printf("That number is ASCENDING !\n\n");

    else
        printf("That number is NOT ASCENDING !\n\n");

    return 0;
}
