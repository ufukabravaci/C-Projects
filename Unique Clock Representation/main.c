#include <stdio.h>
#include <stdlib.h>

int main()
{
    // This program converts seconds to HH:MM:SS format.

    int sec,min,hour,remsec ;
    printf("Enter the seconds : ");
    scanf("%d", &sec);

    hour=sec/3600 ;
    min=(sec-hour*3600)/60 ;
    remsec=(sec-hour*3600)%60;

    if (hour<10)
    printf("0");
    printf("%d : ",hour);

    if (min<10)
        printf("0");
    printf("%d : ",min);

    if (remsec<10)
        printf("0");
    printf("%d",remsec);

    return 0;
}
