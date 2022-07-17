#include <stdio.h>
#include <stdlib.h>

//357 has 3 digits.

int digitFinder(int num)
{
    if (num < 10 )
        return 1 ;
    return 1+ digitFinder(num/10);
}



int main()
{
    int num ;
    printf("Enter a num : ");
    scanf("%d", &num);
    printf("%d has %d digits !\n",num , digitFinder(num));
    return 0;
}
