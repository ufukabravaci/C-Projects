#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num , multiplicator ;
    printf("Enter the number : ");
    scanf ("%d", &num);
    printf ("Enter the multiplicator : ");
    scanf("%d", &multiplicator);

    for (i=1 ; i<=multiplicator ; i++)
        printf("%d * %d = %d\n",num , i , num*i);
    return 0;
}

