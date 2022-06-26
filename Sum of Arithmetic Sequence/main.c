#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a1,an,n;
    printf("Enter the initial term : ");
    scanf("%f",&a1);
    printf("Enter the last term : ");
    scanf("%f",&an);
    printf("Enter the number of elements : ");
    scanf("%f",&n);
    printf("The sum of this arithmetic sequence is %.2f\n\n",(a1+an)*n/2);
    return 0;
}
