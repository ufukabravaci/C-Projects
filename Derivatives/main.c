#include <stdio.h>
#include <stdlib.h>

float derivative(float c , float x, float n)
{
    float powerValue = pow (x, (n-1));
    return n*c*powerValue ;

}



int main()
{
    float cons , pow , num ;
    printf("Enter the constant :");
    scanf("%f", &cons);
    printf("Enter the power :");
    scanf("%f", &pow);
    printf("Enter the num :");
    scanf("%f", &num);

    printf("The derivative of %.1f * %.1f ^ %.1f = %.2f", cons , num , pow, derivative(cons, num , pow));
    return 0;
}
