#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b ;
    printf("Enter the height of rectangle:");
    scanf("%f",&a);
    printf("Enter the width of rectangle:");
    scanf("%f",&b);
    printf("Perimeter of this rectangle is %.2f\n\n", 2*(a+b));
    return 0;
}
