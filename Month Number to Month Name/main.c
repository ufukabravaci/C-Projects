#include <stdio.h>
#include <stdlib.h>

int main()
{
    int monthnumber ;

    printf ("Please enter to number of the month (0-12) : ");
    scanf("%d", &monthnumber);

    switch(monthnumber)
    {
        case 1: printf("The %d th month of the year is January",monthnumber);
        break;

        case 2: printf("The %d th month of the year is February",monthnumber);
        break;

        case 3: printf("The %d th month of the year is March",monthnumber);
        break;

        case 4: printf("The %d th month of the year is April",monthnumber);
        break;

        case 5: printf("The %d th month of the year is May",monthnumber);
        break;

        case 6: printf("The %d th month of the year is June",monthnumber);
        break;

        case 7: printf("The %d th month of the year is July",monthnumber);
        break;

        case 8: printf("The %d th month of the year is August",monthnumber);
        break;

        case 9: printf("The %d th month of the year is September",monthnumber);
        break;

        case 10: printf("The %d th month of the year is October",monthnumber);
        break;

        case 11: printf("The %d th month of the year is November",monthnumber);
        break;

        case 12: printf("The %d th month of the year is December",monthnumber);
        break;

        default : printf("Please enter a valid value.");
        break;



    }
    return 0;
}
