#include <stdio.h>
#include <stdlib.h>

float findarea (float width , float height)
{

    float area ;

    area = width * height ;

    return area ;

}


int main()
{
    float heightrectangle , widthrectangle , areaa ;

    printf ("Enter width : ");
    scanf ("%f", &widthrectangle);
    printf("Enter height :");
    scanf ("%f", &heightrectangle);

    areaa = findarea(widthrectangle , heightrectangle);

    printf("Area of this rectangle is : %f", areaa);

    return 0;
}
