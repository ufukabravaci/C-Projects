#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  grade ;
    int totalsum=0 , gradescount=0 ;

    printf ("Please enter the grades or '-1' to stop : ");
    scanf ("%d", &grade);

    while (grade != -1)
    {
        totalsum = totalsum + grade ;
        gradescount++ ;
        printf ("Please enter the grades or -1 to stop : ");
        scanf ("%d", &grade);
    }

     printf("Your average grade is : %.2f \n", (float)totalsum/gradescount) ;


    return 0;
}
