#include <stdio.h>
#include <stdlib.h>

int main()
{
    float time;
    int hours,avrspeed,distance,modminutes,totalminutes;

    printf("Enter the distance(km) : ");
    scanf("%d",&distance);
    printf("Enter the average speed(km/h) : ");
    scanf("%d", &avrspeed);
    hours=distance/avrspeed;
    time=(float)distance/avrspeed;
    modminutes= (int)(time*60)%60 ;

    printf("The driving time is %d hours and %d minutes.\n\n",hours,modminutes);
    return 0;
}
