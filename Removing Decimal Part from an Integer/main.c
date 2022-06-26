#include <stdio.h>
#include <stdlib.h>

int main()
{
    float data,decimal;

    int intdata;

    printf("Enter the data :");

    scanf("%f",& data);

    intdata=data;
    decimal=data-intdata;

    printf("The decimal part of your data is : %f",decimal);

    return 0;
}
