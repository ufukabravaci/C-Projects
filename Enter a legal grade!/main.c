#include <stdio.h>
#include <stdlib.h>

int main()
{

    int grade ;

    do
    {
        printf("Enter a grade between 0 and 100 : ");
    scanf ("%d", &grade);
    }

    while ((grade<0) || (grade>100));

    printf ("Thanks, you've entered a legit grade of %d", grade);


    return 0;
}
