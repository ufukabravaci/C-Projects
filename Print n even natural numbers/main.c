#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i ;
    printf("Enter the quantity of even numbers you would like to print : ");
    scanf("%d", &num);

    for (i=1 ; i<=num ; i++)
        printf("%d ", i*2);
    return 0;
}
