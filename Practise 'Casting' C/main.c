#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade1,grade2,grade3;
    float avgrade;
    printf("Enter Grade 1:");
    scanf("%d",&grade1);
    printf("Enter Grade 2:");
    scanf("%d",&grade2);
    printf("Enter Grade 3:");
    scanf("%d",&grade3);
    avgrade=((float)grade1+grade2+grade3)/3;
    printf("Your average grade is=%.3f\n\n",avgrade);
    return 0;
}
