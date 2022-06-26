#include <stdio.h>
#include <stdlib.h>

int main()
{
    double cel,fahr;
    printf("Enter the temprature in Celsius:");
    scanf("%lf",&cel);
    fahr=cel*1.8+32;
    printf("That temprature equals in Fahrenheit to:%.2lf \n",fahr);
    return 0;
}
