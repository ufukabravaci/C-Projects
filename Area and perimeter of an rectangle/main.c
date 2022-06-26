#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b ;
    printf("Enter the height and width of rectangle respectively:");
    scanf("%lf %lf",&a, &b);
    printf("\nArea of rectangle is %.2lf\n",a*b);
    printf("\nPerimeter of rectangle is %.2lf\n\n\n",2*(a+b));
    return 0;
}
