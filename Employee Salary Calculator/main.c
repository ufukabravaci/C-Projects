#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hours,salary;

    printf("Enter the total hours worked in this month : ");
    scanf("%f", &hours);
    printf("Enter the salary per hour : ");
    scanf(" %f",&salary);
    printf("The expected salary for this month should be %.2f dollars.\n\n", salary*hours);
    return 0;
}
