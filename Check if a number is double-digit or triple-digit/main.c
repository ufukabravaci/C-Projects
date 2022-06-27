#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ;
    printf("Please enter a positive number :");
    scanf("%d", &a);

    if (a<100 && a>9)
        printf("This number has 2 digits.");

    else if (a<1000 && a>99)
        printf ("This number has 3 digits.");
    else if (a<0)
        printf("This program only works for positive numbers.");
    else
        printf("This program has neither 2 digit nor 3 digits.");
    return 0;
}
