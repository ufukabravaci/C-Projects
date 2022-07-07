#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n , i , sum=0 ;
    printf("Enter the n : ");
    scanf("%d", &n);


    for (i=0 ; i<=n ; i+=15)
    {
        printf("%d ", i);
        sum= sum + i ;

    }

    printf ("\nAnd the sum is '%d'! \n",sum);

    return 0;
}
