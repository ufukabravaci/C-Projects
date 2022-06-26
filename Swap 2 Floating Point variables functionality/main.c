#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,temp;
    a=10;
    b=20;
    printf("a=%.2f and b=%.2f",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\na=%.2f and b=%.2f\n\n",a,b);

    return 0;
}
