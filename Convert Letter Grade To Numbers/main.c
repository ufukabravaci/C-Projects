#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade ;
    printf("Enter your grade (A-F)!\n");
    scanf("%c", &grade);

    switch (grade)
    {
        case 'A' : printf("Your grade is between 90-100");
        break ;

        case 'B' : printf("Your grade is between 80-89");
        break ;

        case 'C' : printf("Your grade is between 70-79");
        break ;

        case 'D' : printf("Your grade is between 60-69");
        break ;

        case 'F' : printf("Your grade is between 0-59");
        break ;

        default : printf("Enter a valid letter grade (A-F)");
        break;


    }
    return 0;
}
