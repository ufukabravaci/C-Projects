#include <stdio.h>
#include <stdlib.h>

typedef struct point{
int x ;
int y ;

}Point ;


void getAndPrintPoint (Point p1)
{
    printf("(%d , %d)", p1.x , p1.y);
}

Point inputAndReturnPoint ()
{
    Point newPoint ;
    printf("Enter the X axis of the point : ");
    scanf("%d", &newPoint.x);
    printf("Enter the Y axis of the point : ");
    scanf("%d", &newPoint.y);

    return newPoint ;
}



int main()
{
    Point p1 = inputAndReturnPoint() ;
    getAndPrintPoint(p1);
    return 0;
}
