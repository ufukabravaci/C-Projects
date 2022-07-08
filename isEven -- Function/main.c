#include <stdio.h>
#include <stdlib.h>

int isEven (int num)
{
    if (num % 2 == 0)
        return 1 ;
        return 0 ;
}


int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("%d", isEven (num));
    return 0;
}
