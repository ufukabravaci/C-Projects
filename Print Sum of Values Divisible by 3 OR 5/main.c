#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , num , sum=0 ;

    printf("Enter the number : ");
    scanf("%d", &num);


    for (i=3 ; i<=num ; i+=3)
    {
        printf("The %d can be divided to 3\n",i);
        sum = sum + i ;
    }

    for (i=5 ; i<=num ; i+=5)
    {
        printf ("The %d can be diveded to 5\n",i);
        sum = sum + i ;
    }

    for (i=15 ; i<=num ; i+=15)
        sum= sum - i ;

    printf("\n***The sum of the numbers that can be divide to 3 OR 5 = %d ***\n\n",sum);





    return 0;
}
