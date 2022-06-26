#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float x1 , x2 , y1 , y2 , distance ;

    printf("Enter X1 : " );
    scanf("%f", & x1);
    printf ("Enter Y1 : ");
    scanf ("%f" , & y1);
    printf ("Enter X2 : ");
    scanf ("%f" , & x2);
    printf ("Enter Y2 : ");
    scanf ("%f" , & y2);


    distance = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2)) ;

    printf("The distance between these 2 points are : %.2f", distance);


    return 0;
}
