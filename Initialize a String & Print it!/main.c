#include <stdio.h>
#include <stdlib.h>

int main()
{

    char fullName[] = "Brad Pitt";

    int i = 0 ;

    while(fullName[i] != '\0')
    {
        printf("%c", fullName[i]);
        i++;
    }


    return 0;
}
