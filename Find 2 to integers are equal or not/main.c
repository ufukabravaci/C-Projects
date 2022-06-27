#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b ;

    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    if (a==b)
        printf("These numbers are EQUAL!");
    else
        printf("These numbers are NOT EQUAL!");

    return 0;
}
