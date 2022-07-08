#include <stdio.h>
#include <stdlib.h>


float findAvgrade(int grade1, int grade2 , int grade3)

{
    float avg;

    avg=(grade1+ grade2 + grade3 )/ 3.0 ;
    return avg ;
}



int main()
{

    int g1, g2, g3 ;

    printf("Enter 3 grades : ");
    scanf("%d%d%d", &g1, &g2, &g3);

    printf("Average = %.2f\n\n", findAvgrade(g1,g2,g3));

    return 0;
}
