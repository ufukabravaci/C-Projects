#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalseconds, hours, minutes, remainingseconds;

    printf("Enter the seconds that you want to convert :");
    scanf("%d",&totalseconds);
    hours=totalseconds/3600;
    minutes=(totalseconds-hours*3600)/60;
    remainingseconds= (totalseconds-hours*3600)%60;
    printf("%d seconds equals to %d hours %d minutes and %d seconds",totalseconds,hours,minutes,remainingseconds);
    return 0;
}
