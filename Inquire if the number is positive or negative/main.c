#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a ;
    printf("Enter a number :");
    scanf("%f", &a);

    if (a<0)
        printf("-1\n");
    else if (a==0)
        printf("0\n");
    else
        printf("+1\n");

    return 0;
}
