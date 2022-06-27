#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade ;

    printf("Enter your grade : ");
    scanf("%d", &grade);

    if (grade>100)
        printf("Unfortunately that is not possible!");
    else if (grade>=80)
        printf("Excellent job!");
    else if (grade>=60)
        printf("Not bad ! Keep studying!");
    else if (grade>=0)
        printf ("You failed study more next time!");
    else
        printf("I know you are better than that!!");

    return 0;
}
