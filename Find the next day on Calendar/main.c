#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day,month,year ;
    int leapyear = 0 ;

    printf("Enter the day (1-31) : ");
    scanf("%d", &day);
    printf("Enter the month (1-12) : ");
    scanf("%d", &month);
    printf("Enter the year : ");
    scanf("%d", &year);

    if (month== 2)
        if (year%4==0 && (year%100 != 0 || year % 400 == 0))
        leapyear = 1 ;

    day=day+1;

    switch (month)
    {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
            if (day<=31)
                break ;

        case 4 :
        case 6 :
        case 9 :
        case 11:
            if (day<=30)
                break;

        case 2 :
            if (day<= 29 && leapyear==1 )
                break ;
            else if (day< =28)
                break ;

        default :
            day= 1 ;
            month = month + 1 ;
            if(month>12)
            {
                month=1 ;
                year+=1 ;
            }


    }


       printf(" The next day is %d/ %d/ %d", day, month,year);


    return 0;
}
