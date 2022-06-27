#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c ;
    printf("Enter the 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);

    if (a==b && a==c )
        printf("These numbers are EQUALS !\n\n");

    else
        printf ("These numbers are NOT EQUALS !\n\n");


    return 0;
}
