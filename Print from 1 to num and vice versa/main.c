#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , i ;

    printf("Enter the number : ");
    scanf("%d", &num);

    if (num>=1)
    {
        for (i=1 ;i<=num ; i++)
    {
        printf("%d ", i );
    }
    printf ("\n");
    for (i=num ; i>=1 ; i--)
        printf ("%d ", i);
    printf("\n\n");
    }

    else
        printf("Please enter a positive number!\n\n");


    return 0;
}
